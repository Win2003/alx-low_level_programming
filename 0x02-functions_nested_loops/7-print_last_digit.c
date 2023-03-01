#include "main.h"

/**
 * print_last_digit - To print the last digit of a number
 * @n: the nummber to be checked
 * Return: the last digit of number n
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
	
	return (0);
}
