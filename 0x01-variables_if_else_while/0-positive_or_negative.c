#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - Entry point of program
 * purpose of program: To determine whether a number is negative
 * or is positive
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if(n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if(n == 0)
	{
		printf("%d is zero\n", n);
	}
	else if(n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
