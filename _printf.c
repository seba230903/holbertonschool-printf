#include <stdarg.h>
#include "main.h"
/**
 * printf - prints
 * @format: char
 */
int _printf(const char *format, ...)
{
	int n = 0;
	va_list list;

	va_start(list, format);

	while (format && format[n])
	{
		if (format[n] == '%')
		{
			picker(format[n + 1])(list); 
			/*si encuentra un modulo le manda a picker el siguiente 
			 * caracter y picker elije que funcion usar*/
			n += 2; /*se saltea el modulo y el siguiente caracter 
			y sigue imprimiendo*/
		}
		else
		{
			_putchar(format[n]);
			n++;
		}
	}
	va_end(list);
	return (0);
}

/**
 * picker - picks function to do
 * Description: recieves a character from function printf and 
 * from there it decides what function to do
 */
int (*picker(char ch))(va_list)
{
	op_p ops[] = {
		{"c", _putchar_c},
		{"s", _putchar_s},
	};
	int i = 0;

	while (ops[i].op)
	{
		if (ops[i].op[0] == ch)
			return (ops[i].f);
		i++;
	}
	return (0);
}
