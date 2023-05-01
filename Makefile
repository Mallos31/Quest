BASENAME  = quest64
VERSION  := us

BUILD_DIR = build
ASM_DIRS  = asm asm/data
BIN_DIRS  = assets
SRC_DIR   = src src/os

SRC_DIRS  = $(SRC_DIR)

TOOLS_DIR := tools

S_FILES   = $(foreach dir,$(ASM_DIRS),$(wildcard $(dir)/*.s))
C_FILES   = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.c))
H_FILES   = $(foreach dir,$(SRC_DIRS),$(wildcard $(dir)/*.h))
BIN_FILES = $(foreach dir,$(BIN_DIRS),$(wildcard $(dir)/*.bin))

O_FILES := $(foreach file,$(S_FILES),$(BUILD_DIR)/$(file).o) \
           $(foreach file,$(C_FILES),$(BUILD_DIR)/$(file).o) \
           $(foreach file,$(BIN_FILES),$(BUILD_DIR)/$(file).o)


TARGET = $(BUILD_DIR)/$(BASENAME).$(VERSION)
LD_SCRIPT = $(BASENAME).ld

CROSS = mips-linux-gnu-
AS = $(CROSS)as
CPP = cpp
LD = $(CROSS)ld
OBJDUMP = $(CROSS)objdump
OBJCOPY = $(CROSS)objcopy
PYTHON = python3

OBJCOPYFLAGS = -O binary


CC := $(TOOLS_DIR)/ido_5.3/usr/lib/cc

OPT_FLAGS := -O2 -g3

OBJECTS := $(shell grep -E 'build.+\.o' quest64.ld -o)
DEPENDS := $(OBJECTS:=.d) 
MIPSISET := -mips2 -o32

INCLUDE_CFLAGS := -I . -I include -I include/2.0I -I include/2.0I/PR

ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -I include

# Files requiring pre/post-processing
GREP := grep -rl
GLOBAL_ASM_C_FILES := $(shell $(GREP) GLOBAL_ASM $(SRC_DIR) </dev/null 2>/dev/null)
GLOBAL_ASM_O_FILES := $(foreach file,$(GLOBAL_ASM_C_FILES),$(BUILD_DIR)/$(file).o)


CFLAGS := -G 0 -Xfullwarn -Xcpluscomm -signed -nostdinc -non_shared -Wab,-r4300_mul
CFLAGS += -D_LANGUAGE_C -D_FINALROM -DF3DEX_GBI -DWIN32
# ignore compiler warnings about anonymous structs
CFLAGS += -woff 649,838
CFLAGS += $(INCLUDE_CFLAGS)

ifeq ($(VERSION),us)
CFLAGS += -DVERSION_US
endif
ifeq ($(VERSION),eu)
CFLAGS += -DVERSION_EU
endif

LDFLAGS = -T $(LD_SCRIPT) -Map $(TARGET).map -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -T undefined_syms.$(VERSION).txt --no-check-sections


ASM_PROCESSOR_DIR := $(TOOLS_DIR)/asm-processor

### Optimisation Overrides
build/src/seqpgetstate.c.o: OPT_FLAGS := -O2 
build/src/aigetlen.c.o: OPT_FLAGS := -O1
build/src/pfssearchfile.c.o: OPT_FLAGS := -O1
build/src/pfsreadwritefile.c.o: OPT_FLAGS := -O1
build/src/pfsfreeblocks.c.o: OPT_FLAGS := -O1
build/src/pfsfilestate.c.o: OPT_FLAGS := -O1
build/src/pfsdeletefile.c.o: OPT_FLAGS := -O1
build/src/pfsallocatefile.c.o: OPT_FLAGS := -O1
build/src/pfsnumfiles.c.o: OPT_FLAGS := -O1
build/src/pfsgetstatus.c.o: OPT_FLAGS := -O1
build/src/contpfs.c.o: OPT_FLAGS := -O1
build/src/leodiskinit.c.o: OPT_FLAGS := -O1
build/src/controller.c.o: OPT_FLAGS := -O1
build/src/initialize.c.o: OPT_FLAGS := -O1
build/src/createthread.c.o: OPT_FLAGS := -O1
build/src/startthread.c.o: OPT_FLAGS := -O1
build/src/createmesgqueue.c.o: OPT_FLAGS := -O1
build/src/visetevent.c.o: OPT_FLAGS := -O1
build/src/pfsisplug.c.o: OPT_FLAGS := -O1
build/src/pfschecker.c.o: OPT_FLAGS := -O1
build/src/sptaskyielded.c.o: OPT_FLAGS := -O1
build/src/sptask.c.o: OPT_FLAGS := -O1
build/src/viblack.c.o: OPT_FLAGS := -O1
build/src/viswapbuf.c.o: OPT_FLAGS := -O1
build/src/vigetcurrframebuf.c.o: OPT_FLAGS := -O1
build/src/vimgr.c.o: OPT_FLAGS := -O1


### Targets

default: all

all: dirs $(TARGET).z64 verify

dirs:
	$(foreach dir,$(SRC_DIRS) $(ASM_DIRS) $(BIN_DIRS),$(shell mkdir -p $(BUILD_DIR)/$(dir)))

check: .baserom.$(VERSION).ok

verify: $(TARGET).z64
	@echo "$$(cat $(BASENAME).$(VERSION).sha1)  $(TARGET).z64" | sha1sum --check

extract: check
	$(PYTHON) $(TOOLS_DIR)/splat/split.py $(BASENAME).$(VERSION).yaml

clean:
	rm -rf assets
	rm -rf build
	#rm -f *auto.txt

### Recipes

.baserom.$(VERSION).ok: baserom.$(VERSION).z64
	@echo "$$(cat $(BASENAME).$(VERSION).sha1)  $<" | sha1sum --check
	@touch $@

$(TARGET).elf: $(O_FILES) $(LANG_O_FILES)
	@$(LD) $(LDFLAGS) -o $@

# ifndef PERMUTER
# $(GLOBAL_ASM_O_FILES): $(BUILD_DIR)/%.c.o: %.c
# 	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< > $(BUILD_DIR)/$<
# 	$(CC) -c -32 $(CFLAGS) $(OPT_FLAGS) $(MIPSISET) -o $@ $(BUILD_DIR)/$<
# 	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< --post-process $@ \
# 		--assembler "$(AS) $(ASFLAGS)" --asm-prelude $(ASM_PROCESSOR_DIR)/prelude.s
# endif

ifndef PERMUTER
$(GLOBAL_ASM_O_FILES): $(BUILD_DIR)/%.c.o: %.c
	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< > $(BUILD_DIR)/$<
	$(CC) -c -32 $(CFLAGS) $(OPT_FLAGS) $(MIPSISET) -o $@ $(BUILD_DIR)/$<
	$(PYTHON) $(ASM_PROCESSOR_DIR)/asm_processor.py $(OPT_FLAGS) $< --post-process $@ \
		--assembler "$(AS) $(ASFLAGS)" --asm-prelude include/macro.inc
endif

# non asm-processor recipe
$(BUILD_DIR)/%.c.o: %.c
	$(CC) -c $(CFLAGS) $(OPT_FLAGS) $(MIPSISET) -o $@ $<

$(BUILD_DIR)/%.s.o: %.s
	$(AS) $(ASFLAGS) -o $@ $<

$(BUILD_DIR)/%.bin.o: %.bin
	$(LD) -r -b binary -o $@ $<

$(TARGET).bin: $(TARGET).elf
	$(OBJCOPY) $(OBJCOPYFLAGS) $< $@

$(TARGET).z64: $(TARGET).bin
	@cp $< $@

### Settings
.SECONDARY:
.PHONY: all clean default
SHELL = /bin/bash -e -o pipefail