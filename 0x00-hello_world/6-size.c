#include <stdio.h>

/**
 * main - Entry point of program
 * purpose of the program: To print sizes of data types
 * on the computer which it is compiled on
 * Return: Always 0 (Successful)
 */
int main(void)
{
	char a;
	int b;
	long int c;
	long long int d;
	float e;
	double f;

	printf("Size of char: %zu byte(s)\n", sizeof(a));
	printf("Size of int: %zu byte(s)\n", sizeof(b));
	printf("Size of long int: %zu byte(s)\n", sizeof(c));
	printf("Size of long long int: %zu byte(s)\n", sizeof(d));
	printf("Size of float: %zu byte(s)\n", sizeof(e));
	printf("Size of double: %zu bytes\n", sizeof(f));
	return (0);
}
