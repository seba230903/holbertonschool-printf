#include <stdarg.h>
#include "main.h"

/**
 * _printf - prints the format
 * @format: is the format to print
 *
 * Return: return the number of print character
 */
int _printf(const char *format, ...)
{
	int n = 0, i = 0, counter = 0, find = 0;
	char chars[] = "csdibuoxXS";
	va_list list;

	if (!format || !format[n + 1])
		return (-1);
	va_start(list, format);
	while (format && format[n])
	{
		if (format[n] == '%')
		{
			find = 0;
			for (i = 0; i <= 9; i++)
			{
				if (format[n + 1] == chars[i])
				{
					find = 1;
					break;
				}
			}
			if (find == 0)
			{
				_putchar(format[n]);
				counter++;
				if (format[n + 1] != '%')
				{
					_putchar(format[n + 1]);
					counter++;
				}
			}
			else if (find == 1)
			{
				counter += picker(format[n + 1])(list);
				/**
				 * si encuentra un modulo le manda a picker el siguiente
				 * caracter y picker elije que funcion usar
				 */
			}
			n += 2; /*se saltea el modulo y el siguiente caracter y sigue imprimiendo*/
		}
		else
		{
			_putchar(format[n]);
			n++;
			counter++;
		}
	}
	va_end(list);
	return (counter);
}

