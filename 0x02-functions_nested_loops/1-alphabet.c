#include "main.h"

/**
 * print_alphabet - To print the alphabet in lowercase
 * Result: Void
 */
void print_alphabet(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
