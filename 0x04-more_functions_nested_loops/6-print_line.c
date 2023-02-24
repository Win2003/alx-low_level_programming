#include "main.h"

/**
 * print_line - To draw a straighr line in the terminal
 * Return: Void
 */
void print_line(int n)
{
	int i

	for (i = 0; i <= n; i++)
	{
		if (n > 0)
		{
			_putchar(-);
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
