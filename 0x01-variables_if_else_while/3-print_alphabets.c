#include <stdio.h>

/**
 * main - Entry point of program
 * purpoe: TO print out uppercase and lowercase alphabets
 * Return: 0 (Always)
 */
int main(void)
{
	char c;
	char n;

	for (c = 'a'; c <= 'z'; c++)
	{
		putchar(c);
	}

	for (n = 'A'; n <= 'Z'; n++)
	{
		putchar(n);
	}
	putchar('\n');

	return (0);
}
