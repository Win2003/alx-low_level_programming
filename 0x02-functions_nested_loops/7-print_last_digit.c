#include "main.h"

/**
 * print_last_digit - To print the last digit of a number 
 * @c: The number to be printed
 * Return: Value of last digit of number
 */
int print_last_digit(int n)
{
	int g;
	g = n % 10;
	if (g < 10)
	{
		g = g * -1;
	}
	_putchar(g + '0');
	return (g);
}
