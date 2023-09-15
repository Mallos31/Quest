#!/usr/bin/env python3

import subprocess
import sys
import os
import pyperclip

def generate_ctx(file_name):
    try:
        # Run the m2ctx.py script
        subprocess.run(['python3', './tools/m2ctx.py', f'./src/{file_name}.c'])

        # Read ctx.c contents
        with open('ctx.c', 'r') as ctx_file:
            ctx_content = ctx_file.read()

        # Copy ctx.c contents to the clipboard using pyperclip
        pyperclip.copy(ctx_content)

        print(f'ctx.c generated and copied to clipboard from {file_name}.c', file=sys.stderr)
    except Exception as e:
        print(f'Error: {e}', file=sys.stderr)

if __name__ == "__main__":
    if len(sys.argv) != 2:
        print("Usage: getctx.py FILE_NAME", file=sys.stderr)
        sys.exit(1)

    file_name = sys.argv[1]
    generate_ctx(file_name)
