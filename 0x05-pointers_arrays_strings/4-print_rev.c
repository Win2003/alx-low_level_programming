#include "main.h"

/**
 * print_rev - To print the sting in reverse form
 * @s: the string to be printed
 * Return: nothing
 */
void print_rev(char *s)
{
	int g = 0;
	int  r;

	while (*s != '\0')
	{
		g++;
		s++;
	}
	s--;
	for (r = g; r > 0; r--)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}


