#include "main.h"
/**
 * Print sign - check sign of a number
 * @n: is the int of argument
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putcharr('-');
			return (-1);
	}
	else
	{
		putchar('0');
		return (0);
	}
}
