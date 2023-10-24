import ninja_syntax
import os
import sys

dir_path = 'src/'
asm_path = 'asm/'
assets_path = 'assets/'

optO2_files = ['seqpgetstate.c']

optO1_files = [
'aigetlen.c', 'pfssearchfile.c', 'pfsreadwritefile.c',
'pfsfreeblocks.c', 'pfsfilestate.c', 'pfsdeletefile.c',
'pfsallocatefile.c', 'pfsnumfiles.c', 'pfsgetstatus.c',
'contpfs.c', 'leodiskinit.c', 'controller.c',
'initialize.c', 'createthread.c', 'startthread.c',
'createmesgqueue.c', 'visetevent.c', 'pfsisplug.c',
'pfschecker.c', 'sptaskyielded.c', 'sptask.c',
'viblack.c', 'viswapbuf.c', 'vigetcurrframebuf.c',
'vimgr.c', 'seteventmesg.c', "recvmesg.c", "sendmesg.c",
"visetmode.c", "visetspecial.c", "virtualtophysical.c",
"gettime.c", "pfsinitpak.c", "contramread.c", "controller.c"
]

optg0_files = ['DA68F0.c']

c_files = []
for root, dirs, files in os.walk(dir_path):
    for file in files:
        if file.endswith('.c'):
            c_files.append(os.path.join(root, file))

s_files = []
for root, dirs, files in os.walk(asm_path):
    for file in files:
        if file.endswith('.s'):
            s_files.append(os.path.join(root, file))

bin_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('.bin'):
            bin_files.append(os.path.join(root, file))

def append_extension(filename, extension='.o'):
    return filename + extension

ia4_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('ia4.png'):
            ia4_files.append(os.path.join(root, file))
            
rgba16_files = []
for root, dirs, files in os.walk(assets_path):
    for file in files:
        if file.endswith('rgba16.png'):
            rgba16_files.append(os.path.join(root, file))
            
j_files = []
j_files.extend([f.replace('.png', '.j') for f in rgba16_files])
            
# Combine the lists and change file extensions
o_files = []
for file in c_files + s_files + bin_files + ia4_files + rgba16_files:
    if 'asm/nonmatchings/' not in file:
        o_files.append("build/" + append_extension(file))

header = (
    "AS = mips-linux-gnu-as\n"
    "CPP = cpp\n"
    "LD = mips-linux-gnu-ld\n"
    "OBJDUMP = mips-linux-gnu-objdump\n"
    "OBJCOPY = mips-linux-gnu-objcopy\n"
    "OBJCOPYFLAGS = -O binary\n"
    "PYTHON = python3\n"
    "cflags = -G 0 -Xfullwarn -Xcpluscomm -signed -nostdinc -non_shared -Wab,-r4300_mul -D_LANGUAGE_C -D_FINALROM -DF3DEX_GBI -DWIN32 -woff 649,838\n"
    "include_cflags = -I . -I include -I include/2.0I -I include/2.0I/PR\n"
    "ido_cc = tools/ido_5.3/usr/lib/cc\n"
    "mips_version = -mips2 -o32\n"
    "DEFINES = -D_LANGUAGE_C -DF3DEX_GBI -DNDEBUG\n"
    "CFLAGS = -woff 649,838,513 $include_cflags\n"
    "ASM_PROC = python3 tools/asm-processor/build.py\n"
    "ASM_PROC_FLAGS = --input-enc=utf-8 --output-enc=euc-jp\n"
    "ASFLAGS = -EB -mtune=vr4300 -march=vr4300 -mabi=32 -Iinclude -Isrc\n"
    "XGCC = mips-linux-gnu-gcc\n"
    "IMG_CONVERT = tools/image_converter.py\n"
    "MAKE_EXPECTED = tools/make_expected.py\n"
    "LD_SCRIPT = quest64.ld\n"
    "LDFLAGS = -T $LD_SCRIPT -Map build/quest64.us.map -T undefined_syms_auto.txt -T undefined_funcs_auto.txt -T undefined_syms.us.txt --no-check-sections\n"
)

# Create a Ninja build file object
with open('build.ninja', 'w') as file:
    file.write(f'{header}')
ninja_file = ninja_syntax.Writer(open('build.ninja', 'a'))

#has -g3
ninja_file.rule('main_cc',
    command = '$ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c -32 $cflags $DEFINES $CFLAGS -O2 -g3 $mips_version -o $out $in',
    description = 'Compiling -O2 .c file' )
#doesn't have -g3
ninja_file.rule('O2g0_cc',
    command = '$ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c -32 $cflags $DEFINES $CFLAGS -O2 -g0 $mips_version -o $out $in',
    description = 'Compiling -O2 -g0 .c file')

ninja_file.rule('O2_cc',
    command = '$ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c -32 $cflags $DEFINES $CFLAGS -O2 $mips_version -o $out $in',
    description = 'Compiling -O2 .c file' )

ninja_file.rule('O1_cc',
    command = '$ASM_PROC $ASM_PROC_FLAGS $ido_cc -- $AS $ASFLAGS -- -c -32 $cflags $DEFINES $CFLAGS -O1 $mips_version -o $out $in',
    description = 'Compiling -O1 .c file' )
    
ninja_file.rule('s_file',
    command = 'iconv --from UTF-8 --to EUC-JP $in | $AS $ASFLAGS -o $out',
    description = 'Assembling .s file' )

ninja_file.rule('bin_file',
    command = '$LD -r -b binary -o $out $in')

ninja_file.rule('make_elf',
    command = '$LD $LDFLAGS -o $out',
    description = 'Linking ELF')

ninja_file.rule('make_z64',
    command = '($OBJCOPY -O binary $in $out) && (sha1sum -c quest64.us.sha1)',
    description = 'Making z64')

ninja_file.rule('make_expected',
    command = '(cp $in $out) && (python3 ./$MAKE_EXPECTED $in)')
    
ninja_file.rule('ia4_build',
                 command = "python3 ./$IMG_CONVERT ia4 $in $out",
                 description = "Converting ia4")
                 
ninja_file.rule('rgba16_convert',
                 command = "(python3 ./$IMG_CONVERT rgba16 $in $out)",
                 description = "Converting rgba16") 
                 
ninja_file.rule('rgba16_build',
                 command = "($LD -r -b binary -o $out $in)",
                 description = "Converting rgba16")   
print (c_files)

for c_file in c_files:
    if os.path.basename(c_file) in optO2_files:
        ninja_file.build("build/" + append_extension(c_file), "O2_cc", c_file)
    elif os.path.basename(c_file) in optO1_files:
        ninja_file.build("build/" + append_extension(c_file), "O1_cc", c_file)
    elif os.path.basename(c_file) in optg0_files:
        ninja_file.build("build/" + append_extension(c_file), "O2g0_cc", c_file)
    else:
        ninja_file.build("build/" + append_extension(c_file), "main_cc", c_file)
for s_file in s_files:
    if "asm/nonmatchings" in s_file:
        continue
    ninja_file.build("build/" + append_extension(s_file), "s_file", s_file)
for bin_file in bin_files:
    ninja_file.build("build/" + append_extension(bin_file), "bin_file", bin_file)
    
for rgba16_file in rgba16_files:
    ninja_file.build("build/" + append_extension(rgba16_file, '.j'), "rgba16_convert", rgba16_file)
    
 #j files are png images converted using image_converter.py
for j_file in j_files:
    ninja_file.build("build/" + os.path.splitext(j_file)[0] + ".png.o", "rgba16_build", "build/" + os.path.splitext(j_file)[0] + ".png.j")
       
ninja_file.build("build/quest64.us.elf", "make_elf ", o_files)
ninja_file.build("build/quest64.us.z64", "make_z64 ", "build/quest64.us.elf")
ninja_file.build("build/quest64.us.ok", "make_expected ", "build/quest64.us.z64")


print ("build.ninja generated")
ninja_file.close()
