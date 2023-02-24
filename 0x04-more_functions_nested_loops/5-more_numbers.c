#include "main.h"

/**
 * more_numbers - To print the number 0 - 14 ten times
 * Result: Void
 */
void more_numbers(void)
{
	int a;
	int b;
	
	for (a = 1; a <= 10; a++)
	{
		for (b = '0'; b <= '14'; b++)
		{
			_putchar(b);
		}
		_putchar('\n');
	}
}
