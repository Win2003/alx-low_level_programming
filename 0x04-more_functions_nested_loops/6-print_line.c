#include "main.h"

/**
 * print_line - To draw a straighr line in the terminal
 * Return: Void
 */
void print_line(int n)
{
	for (n = 0; n <= 9; n++)
	{
		if (n > 0)
		{
			_putchar('-');
		}
		else
		{
			_putchar('\n');
		}
		_putchar('\n');
	}
