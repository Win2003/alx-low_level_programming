#include <stdio.h>

/**
 * main - To cause an infinite loop
 * Return: 0
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
	/* Because i is always 0, the value 0 will be printed to infinity */
	printf("Infinite loop avoided! \\o/\n");

	return (0);
}
