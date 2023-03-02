#include "main.h"

/**
 * more_numbers - To print numbers from 0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int a;
	char b;
	char c;

	for (a = 0; a <= 9; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			_putchar(b);
		}
		for (c = '0'; c <= '4'; c++)
		{
			_putchar('1' + c);
		}
		_putchar('\n');
	}
}
