#include "main.h"

/**
 * largest_number - returns the largest of three numbers
 * @a: the first integer
 * @b: the second integer
 * @c: the third integer
 * Return: Largest number
 */
int largest_number(int a, int b, int c)
{
	int largest;

	if ((a > b && b > c) && (a > c && c > b))
	{
		largest = a;
	}
	else if ((b > a && a > c) && (b > c && c > a))
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}