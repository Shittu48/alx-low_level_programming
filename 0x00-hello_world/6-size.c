#include <stdio.h>

/**
 * main - print
 *
 * Return: 0
 */
int main(void)
{
	char a;
	int b;
	long c;
	long long d;
	float e;

	printf("Size of a char: %d byte(s)\n", sizeof(a));
	printf("Size of an int: %d byte(s)\n", sizeof(b));
	printf("Size of a long: %d byte(s)\n", sizeof(c));
	printf("Size of a long long: %d bytes(s)\n", sizeof(d));
	printf("Size of a float: %d bytes(s)\n", sizeof(e));
	return (0);
}
