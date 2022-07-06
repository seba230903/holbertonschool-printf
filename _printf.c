#include "main.h"
#include <stdarg.h>
#include <stdio.h>
#include <string.h>
/**
 * _printf - agregar comentario
 * @format: is the format
 *
 * Return: the numbers of character.
*/
int _printf(const char *format, ...)
{
	int n = 0, contador = 0;
	va_list list;

	va_start(list, format);

	while (format && format[n])
	{
		if (format[n] != '%')
		{
			_putchar_c(format[n]);
			contador++;
		}
		else
		{
			if (format[n + 1] == '%')
			{
				_putchar_c(format[n + 1]);
				contador++;
			}
			else if (format[n + 1] == 'c')
			{
			       _putchar_c(va_arg(list, int));
			       contador++;
			}
			else if	(format[n + 1] == 's')
			{
				_putchar_s(va_arg(list, char *));
			}
			n++;
		}
		
		n++;
	}
	va_end(list);
	return (contador);
}


