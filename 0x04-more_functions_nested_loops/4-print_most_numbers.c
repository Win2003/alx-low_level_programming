#include "main.h"

/**
 *  print_most_numbers - To print numbers from 0 through 9 except number 2, 4
 *  Result: Void
 */
void print_most_numbers(void)
{
	char c = 0;

	while (c <= 9)
	{
		if (c != 2 && c != 4)
		{
			_putchar(c);
		}
		
		c++;
		_putchar('\n');
	}
}	
