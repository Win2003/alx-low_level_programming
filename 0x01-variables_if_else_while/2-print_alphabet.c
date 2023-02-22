#include <stdio.h>

/**
 * main - Entry point of program
 * purpose of program: To print alphabet in lowercase
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
	return (0);
}	
