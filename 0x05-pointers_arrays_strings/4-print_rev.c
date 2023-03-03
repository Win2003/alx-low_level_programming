#include "main.h"

/**
 * print-rev - To print a string in reverse
 * @s: the string to be printed
 * Return: Nothing
 */
void print_rev(char *s)
{
	while (*s != '\0')
	{
		s++;
	}
	while (*s != '\0' && s == s[0])
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
