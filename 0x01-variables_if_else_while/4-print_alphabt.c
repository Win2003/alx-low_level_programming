#include <stdio.h>

/**
 * main - Entry point of the program
 * purpose: To print lowercase alphabets exempting 'q' and 'e'
 * Return: (0) Always
 */
int main(void)
{
	char c = 'a';

	while (c <= 'z')
	{
		if (c == 'e' || c == 'q')
		{
			c++;
			continue;
		}
		putchar(c);
		c++;
	}
	putchar('\n');

		return (0);
}	

