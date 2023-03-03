#include "main.h"

/**
 * _strlen - To print the length of a char
 * @s: the character to be printed
 * Return: The lenght of the character
 */
int _strlen(char *s)
{
	int g;

	g = 0;

	while (*s != '\0')
	{
		s++;
		g++;
	}
	return (g);
}
