#include <stdio.h>

/**
 * main - Entry point of program
 * purpose: To print a string
 * Return: Always 1
 */
int main(void)
{
	char t[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19";
	char *d = char t[];

	while (*d != '\0')
	{
		putchar(*d);
		d++;
	}
	putchar('\n');
}
