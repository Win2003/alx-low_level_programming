#include <stdio.h>

/**
 * main - Entry point of program
 * purpose: To print the numbers 0-9
 * Return: Always (0)
 */
int main(void)
{
	char a = '0';

	while (a <= '9')
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
