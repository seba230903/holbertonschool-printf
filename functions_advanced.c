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

	if (aux >= 2)
	{
		counter = i_to_b(aux / 2);
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


/**
 * i_to_o - Convert a int to a binary
 * @i: is the integer
 *
 * Return:the character prints
 */

int i_to_o(unsigned int i)
{
	unsigned int aux = i;
	int counter = 0;

	if (aux >= 8)
		counter = i_to_o(aux / 8);
		
	_putchar((aux % 8) + '0');
	counter++;
	return (counter);
}


/**
 * i_to_X - Convert a int to a lower hexadecimal
 * @i: is the integer
 *
 * Return:the character prints
 */

int i_to_X(unsigned int i)
{
	unsigned int aux = i;
	int counter = 0;

	if (aux >= 16)
		counter = i_to_X(aux / 16);
		
	if ((aux % 16) > 9)
		_putchar((aux % 16) + 55);
	else
		_putchar((aux % 16) + 48);
	counter++;

	return (counter);
}

/**
 * i_to_X - Convert a int to a lower hexadecimal
 * @i: is the integer
 *
 * Return:the character prints
 */

int i_to_x(unsigned int i)
{
        unsigned int aux = i;
        int counter = 0;

        if (aux >= 16)
                counter = i_to_x(aux / 16);

	if ((aux % 16) > 9)
		_putchar((aux % 16) + 87);
	else
		_putchar((aux % 16) + 48);
	counter++;

        return (counter);
}

/**
 * i_to_u - Print the integer
 * @i: is the integer
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
