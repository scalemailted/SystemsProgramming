#!/bin/bash

# 02-showbytes-code.sh
# Systems Programming: Binary Code Representation and Disassembly
# This script compiles the 02-showbytes-code.c program, 
# highlighting how the `sum` function is stored in memory as binary. 
# It uses `gcc` with debugging symbols to keep function names in the binary, 
# then `objdump` to disassemble the binary. 
# This illustrates the translation of C code into machine-readable assembly language, 
# demonstrating code storage in memory.


# Usage: 
# 1. Make this script executable: chmod +x 02-showbytes-code.sh
# 2. Run the script: ./02-showbytes-code.sh

# Compile the C program with debugging symbols. This retains function names in the compiled binary.
gcc -g 02-showbytes-code.c -o sum_program

# Use objdump to disassemble the compiled program.
# The `-d` option disassembles the executable sections (where the code resides).
# `grep -A8 "<_sum>:"` filters the output to show the assembly of the sum function.
objdump -d sum_program | grep -A8 "<_sum>:"

