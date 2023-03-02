#include "main.h"

/**
 * print_diagonal - To print a diagonal line on the terminal
 * @n: The number of times the space is printed
 * Return: Void
 */
void print_diagonal(int n)
{
	int a;
	
	a = 1;
	while (a <= n)
	{
		if (n > 0)
		{
			_putchar(' ');
		}
		_putchar(39);
		m++;
	}
	_putchar('\n');
}
