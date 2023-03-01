#include <stdio.h>

/**
 * main - Entry point of program
 * purpose: To print lowercase alphabet exempting q and e
 * Return: (0) always
 */
int main(void)
{
	char c = 'a';

	while ((c <= 'z') && (c != 'q' && 'e'))
	{
		putchar(c);
	}
	putchar('\n');

	return (0);
}

