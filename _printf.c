#include <stdarg.h>
#include "main.h"
/**
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
			n += 2;
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
