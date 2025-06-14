# argc_argv Project

## Overview

This project contains a simple C program that prints its own name, exactly as it was called (including the path).

## File

- `0-whatsmyname.c`: Prints the program's name.

## Requirements

- The program should print the name of the program, followed by a new line.
- If you rename the executable, it should print the new name without recompiling.
- The path before the program name should not be removed.

## Compilation

To compile the program, run:

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 0-whatsmyname.c -o myprogram
