# C - printf

We are Software Development students at  [Holberton School](https://www.holbertonschool.com/) and we have to create our own printf like function.

## Description
Printf is a function used to print an array of chars and choose a format for said string at the same time. In this aproach, the function recieves an array of chars with all the characters to print along whith its format. It is also able to recieve all the parameters for the format, like chars, strings, integers, etc.

## Functions
- %c Prints a variable containing an ASCII value.
- %s Prints an array of chars.
- %d Prints a variable of type int in base 10.
- %i Does the same as "%d".
- %b Prints a variable of type int in base 2.
- %u Prints a variable of type unsigned int.
- %o Prints a variable of type int in base 8.
- %x Prints a variabe of type int in base 16 with lowercase letters.
- %X Does the same as "%x" but uppercase.
- %S Prints an array of chars but replaces non printable characters with their value in hexadecimal.


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



```mermaid
graph TD;
  Start0(Start)-->If0{format?}
  If0-->|No|Return0(Return -1)
  If0-->|Yes|While0{Go through format}
  While0-->|No|Return1(Return counter)
  While0-->|Yes|If1{The char is a %}
  If1-->|No|Put0[Put the char]-->While0
  If1-->|Yes|For0[Checks for function]
  For0-->If2{Is the following char<br>a valid function}
  If2-->|Yes|Call0[Call picker function]-->While0
  If2-->|No|Put1[Put the char]-->While0
  While0-->Return2(Return counter)
 ```
