#ifndef MAIN_H
#define MAIN_H

#include <unistd.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct op - struct op
 * @op: operator
 * @f: function
 */
typedef struct op
{
	char *op;
	int (*f)(va_list);
} op_p;

int _putchar_c(va_list list);
int _putchar_s(va_list list);
int _printf(const char *format, ...);
int (*picker(char ch))(va_list list);
int _putchar(char c);
int _putchar_d(va_list list);

#endif
