#include "main.h"

/**
 *_swap_int - To swap two integers
 * @a: the integer to be swapped
 * @b: the integer to be swapped
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int m;

	m = *a;
	*a = *b;
	*b = m;
}
