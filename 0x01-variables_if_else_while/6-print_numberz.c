#include <stdio.h>

/**
 * main - Entry point of program in C
 * purpose: To print numbers 0-9 without using char variable
 * Return: Always (0)
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		a++;
	}
	putchar('\n');

	return (0);
}
