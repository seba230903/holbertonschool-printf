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
	int n = 0, counter = 0;
	va_list list;

	if (!format || !format[n + 1])
		return (-1);
	va_start(list, format);
	while (format && format[n])
	{
		if (format[n] == '%')
		{
			if (format[n + 1] != 'c' && format[n + 1] != 's')
			{
				_putchar(format[n]);
				if (format[n + 1] != '%')
					_putchar(format[n + 1]);
				counter += 2;
			}
			else
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

/**
 * picker - picks function to do
 * @ch: is th character
 * Description: recieves a character from function printf and
 * from there it decides what function to do
 *
 * Return: return the function
 */
int (*picker(char ch))(va_list)
{
	op_p ops[] = {
		{"c", _putchar_c},
		{"s", _putchar_s},
	};
	int i = 0;

	while (i < 1)
	{
		while (ops[i].op)
		{
			if (ops[i].op[0] == ch)
				return (ops[i].f);
			i++;
		}
	}
	return (ops[2].f);
}
