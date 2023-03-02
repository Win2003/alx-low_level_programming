#include "main.h"

/**
 * print_numbers - To print numbers (0 - 9)
 * Return: nothing
 */
void print_numbers(void)
{
	char c = '0';

	while (c <= '9')
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');
}
