#include <stdio.h>

/**
 * main - Entry point of program
 * purpose: To print numbers in hexadecimal(base 16)in lowercase
 * Return: Always (0)
 */
int main(void)
{
	int a;
	int b;

	for (a = 48; a <= 57; a++)
	{
		putchar(a);
		a++;
	}
	for (b = 97; b <= 102; b++)
	{
		putchar(b);
		b++;
	}
	putchar('\n');

	return (0);
}

