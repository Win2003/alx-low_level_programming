#include "main.h"

/** 
 * print_numbers - To print numbers 0 through 9
 * Return: void
 */
void print_numbers(void)
{
	char a = '0';
		
		while ( a <= '9')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
}
