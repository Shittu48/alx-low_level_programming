#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main- program that adds positive numbers
 * @argc: arg count
 * @argv: arg vector
 * Return: 0 on Success and 1 when failed
 */
int main(int argc, char argv[])
{
	int sum, i, j;

	sum = 0;
	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
	sum += atoi(argv[i]);
	i}
	printf("%d", sum);
	return (0);
}
