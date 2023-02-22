#include <stdio.h>

/**
 * main - Entry point of program
 * purpose of program: To print the alphabet
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char a = 'a';

	while (a <= 'z')
	{
		putchar(a);
		a++;
	}
	putchar('\n');
	return (0);
}
