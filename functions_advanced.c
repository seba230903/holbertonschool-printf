#include <unistd.h>
#include "main.h"

/**
 * i_to_u - Print the integer
 * @d: is the integer
 *
 * Return:the character prints
 */
int i_to_u(unsigned int d)
{
	unsigned int aux = d;
	int counter = 0;

	if (aux >= 10)
		counter = i_to_u(aux / 10);

	_putchar((aux % 10) + '0');
	counter++;
	return (counter);
}

/**
 * _putchar_o - writes a octal
 * @list: is the list of the variadic function
 * Return: On success 1
  */
int _putchar_o(va_list list)
{
	unsigned int d;

	d = va_arg(list, int);
	return (i_to_o(d));
}

/**
 * _putchar_u - writes a unsigned
 * @list: is the list of the variadic function
 * Return: On success 1
  */
int _putchar_u(va_list list)
{
	unsigned int d;

	d = va_arg(list, int);
	return (i_to_u(d));
}

/**
 * _putchar_x - writes a hexadecimal
 * @list: is the list of the variadic function
 * Return: On success 1
  */
int _putchar_x(va_list list)
{
	unsigned int d;

	d = va_arg(list, int);
	return (i_to_x(d));
}

/**
 * _putchar_X - writes a hexadecimal in upper
 * @list: is the list of the variadic function
 * Return: On success 1
  */
int _putchar_X(va_list list)
{
	unsigned int d;

	d = va_arg(list, int);
	return (i_to_X(d));
}
