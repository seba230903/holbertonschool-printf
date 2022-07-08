#include <unistd.h>
#include "main.h"
/**
 * i_to_b - Convert a int to a binary
 * @i: is the integer
 *
 * Return:the character prints
 */

int i_to_b(unsigned int i)
{
	unsigned int aux = i;
	int counter = 0;

	if (aux > 2)
	{
		counter++;
		i_to_b(aux / 2);
	}
	counter++;
	if (!(aux % 2))
	{
		_putchar('0');
	}
	else
	{
		_putchar ('1');
	}
	return (counter);
}

/**
 * _putchar_b - writes a binary
 * @list: is the list of the variadic function
 * Return: On success 1
  */
int _putchar_b(va_list list)
{
	unsigned int d;

	d = va_arg(list, int);
	return (i_to_b(d));
}
