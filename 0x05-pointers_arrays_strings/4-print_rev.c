#include "main.h"

/**
 * print-rev - To print a string in reverse
 * @s: the string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	int a = 0

	while (a >= 0)
	{
		s++;
	}
	while (*s >= 32)
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
