#include "main.h"

/**
 * more_numbers - To print numbers 0 to 14 ten times
 * Return: nothing
 */
void more_numbers(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 14; b++)
		{
			if (b > 9)
			{
				_putchar('1');
				_putchar('0' + b % 10);
				continue;
			}
			_putchar('\n');
		}
	}
}
