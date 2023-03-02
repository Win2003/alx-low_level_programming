#include "main.h"

/**
 * print_line - To draw a straight line in the terminal
 * @n: the number to determine how long the line will be
 * Return: nothing
 */
void print_line(int n)
{
	int m;

	m = 1;
	while (m <= n)
	{
		if (n > 0)
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
