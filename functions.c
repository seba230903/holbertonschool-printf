#include <unistd.h>
#include "main.h"

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}


/**
 * _putchar_c - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_c(va_list list)
{
	int c;
	
	c = va_arg(list, int);
	return (write(1, &c, 1));
}


/**
 * _putchar_s - writes the string s to stdout
 * @s: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_s(va_list list)
{
	char *s;
	int n = 0;

	s = va_arg(list, char *);
	if (s == NULL)
		s = "(null)";
	while (s[n])
	{
		_putchar(s[n]);
		n++;
	}
	return (n);
}
