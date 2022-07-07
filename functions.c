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
 * @c: char
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
 * @s: string
 * Return: On success 1
  */
int _putchar_s(va_list list)
{
	char *s;
	int m = 0;

	s = va_arg(list, char *);
	if (!s)
		s = "(null)";
	while (s[m + 1])
	{
		_putchar(s[m]);
		m++;
	}
	return (m);
}
