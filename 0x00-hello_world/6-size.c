#include <stdio.h>

/**
 * main - Print different sizes of variable
 *
 * return: 0
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
	printf("Size of a long long: %d byte(s)\n", sizeof(d));
	printf("Size of a float: %d byte(s)\n", sizeof(d));
	return (0);
}
