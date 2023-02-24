#include "main.h"

/**
 *  print_most_numbers - To print numbers from 0 through 9 except number 2, 4
 *  Result: Void
 */
void print_most_numbers(void)
{
	char c;

	for (c = 0; c <= 9; c++)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c);
		}
		
	}
	_putchar('\n');
}	
