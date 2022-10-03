#include <stdio.h>
#include <stdlib.h>

/**
 * main- Fincyion that prints the number of arguments
 * @argc: argument count
 * @argv: veector od arguement
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int num;

	for (num = 0; num < argc; num++)
		(*argv)++;
	printf("%d\n", num - 1);
	return (0);
}
