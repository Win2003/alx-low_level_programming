#include "main.h"

/**
 * print_sign - To print the sign of a number
 * @n:The character to be checked
 * Return: 1 (print '+' when greater than zero), 0 (print '0' when zero)
 * -1 (print '-' when less than zero)
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar(43);
		return (1);
	}
	else if (n < 0)
	{
		_putchar(45);
		return (-1);
	}
	else
	{
		_putchar(48);
		return (0);
	}
}
