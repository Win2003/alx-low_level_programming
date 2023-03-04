#include "main.h"

/**
 * print_rev - To print in reverse
 * @s: The string to be printed
 * Return: nothing
 */
void rev_string(char *s)
{
	int i;
	int j;
	char tre = s[0];


	i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	for (j = 0; j < i; j++)
	{
		i--;
		tre = s[i];
		s[i] = s[j];
		s[j] = s[i];
	}
}

