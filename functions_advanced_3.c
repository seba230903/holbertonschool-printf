#include <unistd.h>
#include "main.h"

/**
 * _putchar_S - prints the string
 * @list: is the list of the variadic function
 * Return: On success 1
  */
int _putchar_S(va_list list)
{
	char *s;
	int counter = 0;

	s = va_arg(list, char *);

	while (*s)
	{
		if ((*s) < 32 || (*s) >= 127)
		{
			_putchar(92);
			_putchar('x');
			if (*s <= 15)
			{
				_putchar('0');
				_putchar(*s + 55);
			}
			else if (*s < 32)
			{
				_putchar('1');
				_putchar(*s + 55);
			}
			else if (*s == 127)
			{
				_putchar('7');
				_putchar('F');
			}
			counter += 4;
		}
		else
		{
			_putchar(*s + '0');
			counter++;
		}
		s++;
	}
	return (counter);
}
