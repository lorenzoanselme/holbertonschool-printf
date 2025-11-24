# \_printf

Custom implementation of the C standard library function `printf`.\
This project reproduces formatted output functionality using variadic
functions and manual parsing.

------------------------------------------------------------------------

## Table of Contents

1.  Introduction\
2.  Features\
3.  Supported Conversion Specifiers\
4.  Project Requirements\
5.  Compilation\
6.  Usage Example\
7.  File Structure\
8.  Notes\
9.  Authors

------------------------------------------------------------------------

## 1. Introduction

The `_printf` function is a simplified, custom version of the standard
`printf` function.\
It processes a format string, handles conversion specifiers, and outputs
formatted text using `write()`.

This project focuses on: - Understanding variadic functions
(`stdarg.h`) - Parsing format strings - Managing output without using
the standard `printf` - Modular C programming following Betty style -
Building a complete group project in C

------------------------------------------------------------------------

## 2. Features

-   Parses a format string character by character
-   Handles multiple conversion specifiers
-   Modular design with separate handlers
-   Fully compliant with project restrictions
-   No global variables
-   No more than 5 functions per file
-   Includes header file protections

------------------------------------------------------------------------

## 3. Supported Conversion Specifiers

  Specifier   Description
  ----------- -----------------------
  `%c`        Character
  `%s`        String
  `%%`        Prints a percent sign
  `%d`        Signed integer
  `%i`        Signed integer

Additional specifiers (hex, octal, unsigned, pointers, etc.) may be
added as needed to match all test cases.

------------------------------------------------------------------------

## 4. Project Requirements

This project follows the Holberton School C programming standards.

-   All files compiled on Ubuntu 20.04 LTS using:\
    `gcc -Wall -Werror -Wextra -pedantic -std=gnu89`
-   All files must end with a new line\
-   Betty style compliance is mandatory\
-   No use of global variables\
-   Maximum of 5 functions per file\
-   You must include a `main.h` header with all prototypes\
-   Header files must be guarded

### Authorized Functions

-   `write`
-   `malloc`
-   `free`
-   `va_start`
-   `va_end`
-   `va_copy`
-   `va_arg`

------------------------------------------------------------------------

## 5. Compilation

Compile using:

``` bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 -Wno-format *.c -o printf
```

The `-Wno-format` flag is useful when comparing your `_printf` with the
system `printf`.

------------------------------------------------------------------------

## 6. Usage Example

``` c
#include "main.h"

int main(void)
{
    _printf("Hello %s, number: %d\n", "World", 42);
    return 0;
}
```

------------------------------------------------------------------------

## 7. File Structure

A recommended project structure:

    ├── main.h
    ├── _printf.c
    ├── format_parser.c
    ├── handlers/
    │   ├── handle_char.c
    │   ├── handle_string.c
    │   ├── handle_int.c
    ├── utils/
    │   ├── print_number.c
    │   ├── write_buffer.c
    └── README.md

------------------------------------------------------------------------

## 8. Notes

-   Do not push any `main.c` files to the root of your repository\
-   Your `_printf` should match `printf` behavior for unspecified edge
    cases\
-   Work as a team to develop a complete test suite

------------------------------------------------------------------------

## 9. Authors

Developed as part of the Holberton School Low-Level Programming
curriculum.
