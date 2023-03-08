#include "main.h"

/**
 * puts2 - To print every otherr character of a string
 * @str: The string to be printed
 * Return: nothing
 */
void puts2(char *str);
{
	while (*str != '\0')
	{
		_putchar(str);
		str = str + 2;
	}
	_putchar('\n');
}
