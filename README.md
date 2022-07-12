# C - printf

We are Software Development students at  [Holberton School](https://www.holbertonschool.com/) and we have to create our own printf like function.

## Description
Printf is a function used to print an array of chars and choose a format for said string at the same time. In this project, the function recieve an array of chars with all the characters to prinst along whith its format. It is also able to recieve all the parameters for the format, like chars, string integers, etc.

## Examples

```
_printf("Hello %s\n", "World");
```
Output: Hello World

```
_prinf("2 + 2 = %d", 4);
```
Output: 2 + 2 = 4

## General Requirements
- Allowed editors: vi, vim, emacs
- All files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
- All  files should end with a new line
- A README.md file, at the root of the folder of the project is mandatory
- The code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
- Not allowed to use global variables
- No more than 5 functions per file
- The prototypes of all functions should be included in the header file called main.h
- All header files should be include guarded


## Authorized functions and macros
- write (man 2 write)
- malloc (man 3 malloc)
- free (man 3 free)
- va_start (man 3 va_start)
- va_end (man 3 va_end)
- va_copy (man 3 va_copy)
- va_arg (man 3 va_arg)


## Compilation
This project  is compiled this way:

```
$ gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c
```

## Tasks
- 0 - Write a function that produces output according to a format. Handle the following conversion specifiers: c, s, %
- 1 - Handle the following conversion specifiers: d, i.
- 2 - Create a man page for your function.
- 3 - Handle the following custom conversion specifiers: b, the unsigned int argument is converted to binary
- 4 - Handle the following conversion specifiers: u, o, x, X
- 7 - Handle the following custom conversion specifier: S

#### Authors: 
@ [Gaston Larroque](https://github.com/gasstin) &  [Sebastian Lopez Dominguez](https://github.com/seba230903)



:)
