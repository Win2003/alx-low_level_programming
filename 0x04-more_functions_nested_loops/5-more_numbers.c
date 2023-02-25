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
		for (b = 0; b <= 14; b++)
		{
			if (b > 10) && (b <= 14)
			{
				_putchar('1' + b%10);
			}
			else
			{
				_putchar('0' + b);
			}
		}
		_putchar('\n');
	}
}
