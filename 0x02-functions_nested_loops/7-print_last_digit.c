#include "main.h"

/**
 * print_last_digit - To print the last digit of number n
 * @n: The number to be checked
 * Return: Always (0)
 */
int print_last_digit(int n)
{
	int g;

	g = n % 10;

	if (g < 0)
	{
		g = g * -1;
	}
	_putchar('0' + g);

	return (g);
}
