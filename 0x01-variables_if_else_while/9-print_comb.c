#include <stdio.h>

/**
 * main - Entry point of program
 * purpose: To print possible combinations of numbers
 * Return: Always (0)
 */
int main(void)
{
	int a = 48;

	while (a <= 57)
	{
		putchar(a);
		putchar(',');
		putchar(' ');
		a++;
	}
	putchar('\n');

	return (0);
}
