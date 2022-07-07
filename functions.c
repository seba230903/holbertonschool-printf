#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes a character
 * @c: char
 * Return: on success 1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _putchar_c - writes a character
 * @list: is the list of the variadic function
 * Return: on success 1
 */
int _putchar_c(va_list list)
{
	int c;

	c = va_arg(list, int);
	return (write(1, &c, 1));
}


/**
 * _putchar_s - writes a string
 * @list: is the list of the variadic function
 * Return: On success 1
  */
int _putchar_s(va_list list)
{
	char *s;
	int counter = 0;

	s = va_arg(list, char *);
	if (!s)
	{
		_putchar('(');
		_putchar('n');
		_putchar('u');
		_putchar('l');
		_putchar('l');
		_putchar(')');
		return (6);

	}
	else
	{
		while (*s)
		{
			_putchar(*s);
			counter++;
			s++;
		}
	}
	return (counter);
}
