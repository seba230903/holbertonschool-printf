#include <unistd.h>
#include "main.h"

/**
 * picker - picks function to do
 * @ch: is th character
 * Description: recieves a character from function printf and
 * from there it decides what function to do
 *
 * Return: return the function
 */
int (*picker(char ch))(va_list)
{
        op_p ops[] = {
                {"c", _putchar_c},
                {"s", _putchar_s},
                {"d", _putchar_d},
		{"i", _putchar_d}
        };
        int i = 0;

        while (i < 1)
        {
                while (ops[i].op)
                {
                        if (ops[i].op[0] == ch)
                                return (ops[i].f);
                        i++;
                }
        }
        return (ops[2].f);
}


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

int _putchar_d(va_list list)
{
        int d, aux = 1, counter = 0;

        d = va_arg(list, int);
	if (d)
	{
		if (d < 0)
		{
			_putchar('-');
			d = d * -1;
			counter++;
		}
		for (aux = 1; aux <= d; aux *= 10)
			;
		for (aux = aux / 10; aux > 1; aux /= 10)
		{
			_putchar(((d / aux) % 10) + 48);
			counter++;
		}
		_putchar((d % 10) + 48);
		counter++;
	}
	else
	{
		_putchar('0');
		counter = 1;
	}
	return (counter);
}
