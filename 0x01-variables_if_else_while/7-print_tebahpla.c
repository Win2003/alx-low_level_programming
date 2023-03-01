#include <stdio.h>

/**
 * main - Entry point of program
 * purpose: To print alphabet in lowercase in reverse
 * Return: Always (0)
 */
int main(void)
{
	char b = 'z';

	while (b >= 'a')
	{
		putchar(b);
		b--;
	}
	putchar('\n');

	return (0);
}
