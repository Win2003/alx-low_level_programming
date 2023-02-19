#include <stdio.h>

/**
 * main - Entry point of program
 * purpose of program: To print sizes of data types on the computer
 * which it is compiled on
 * Return: Always 0 (Successful)
 */
int main(void)
{
	int a;
	char b;
	long int c;
	long long int d;
	float e;
	double f;

	printf("Size of int: %zu bytes\n", sizeof(a));
	printf("Size of char: %zu bytes\n", sizeof(b));
	printf("Size of long int: %zu bytes\n", sizeof(c));
	printf("Size of long long int: %zu bytes\n", sizeof(d));
	printf("Size of float: %zu bytes\n", sizeof(e));
	printf("Size of double: %zu bytes\n", sizeof(f));
	return (0);
}

