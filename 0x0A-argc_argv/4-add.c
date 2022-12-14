#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- program that adds positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on Success and 1 when failed
 */
int main(int argc, char *argv[])
{
	int sum = 0, i, j;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (isdigit(argv[i][j] == 0))
			{
				puts("Error");
				return (1);
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
	sum += atoi(argv[i]);
	}
	printf("%d\n", sum);
	return (0);

