#include "main.h"

/**
 * _isupper - To check for uppercase character
 * @c: The character to be checked
 * Return: if uppercase (1), else always (0)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
