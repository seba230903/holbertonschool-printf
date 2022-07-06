#include <unistd.h>
#include "main.h"

/**
 * _putchar_c - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_c(char c)
{
	return (write(1, &c, 1));
}

/**
 * _putchar_s - writes the string s to stdout
 * @s: The string to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar_s(char *s)
{
	int n = 0;

	if (s == NULL)
		_putchar_c('n');
	else
	{
		while (s[n])
		{
			_putchar_c(s[n]);
			n++;
		}
	}
	return (0);
}
