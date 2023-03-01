#include <stdio.h>

/**
 * main - Entry point of program
 * purpose: To print all possible combinations of single digit
 * Return: Always (0)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		for (b = 48; b <= 57; b++)
		{
			putchar(a);
			putchar(b);
		}
		putchar(',');
		putchar(' ');
	}
	return (0);
}
