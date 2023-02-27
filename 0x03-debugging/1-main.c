#include <stdio.h>

/**
 * main - To cause an infinite loop
 * Return: 0 (Successful)
 */

int main(void)
{
	int i;

	printf("Infinite loop incoming :(\n");
	
	i = 0;

	while (i < 10)
	{
		putchar(i);
	}

	printf("Infinite loop avoided! \n");

	return (0);
}
