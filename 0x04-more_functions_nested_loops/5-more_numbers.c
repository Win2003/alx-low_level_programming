#include "main.h"

/**
 * more_numbers - To print numbers from 0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int a;
	char b;
	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			_putchar(b);
		}
		for (c = 10; c <= 14; c++)
		{
			_putchar('0' + c);
		}
		_putchar('\n');
	}
}
