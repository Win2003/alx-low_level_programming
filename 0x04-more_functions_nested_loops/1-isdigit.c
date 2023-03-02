#include "main.h"

/**
 *  _isdigit - To check for digits
 * @c: Character to be checked
 * Return: if digit (1), else (0)
 */
int _isdigit(int c)
{
	if (c >= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
