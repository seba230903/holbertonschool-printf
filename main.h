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
int _putchar_b(va_list list);
int _putchar_o(va_list list);
int _putchar_u(va_list list);
int _putchar_x(va_list list);
int _putchar_X(va_list list);
int _putchar_S(va_list list);
int i_to_b(unsigned int i);
int i_to_o(unsigned int i);
int i_to_x(unsigned int i);
int i_to_u(unsigned int d);
int i_to_x(unsigned int i);

#endif
