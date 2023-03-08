#include "main.h"

/**
 * rev_string - To reverse a string
 * @s: the string to be reversed
 * Return: nothing
 */
void rev_string(char *s)
{
	int a = 0;
	int b;
	char c;
	
	while (*s != '\0')
	{
		a++;
		s++;
	}
	for (b = 0; b < a; b++)
	{
		a--;
		c = *(s + b);
		*(s + b) = *(s + a);
		*(s + a) = c;
	}
}

