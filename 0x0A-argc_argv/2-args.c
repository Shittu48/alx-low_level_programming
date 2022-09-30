#include <stdio.h>
#include <stdlib.h>

/**
 * main - function peinting each argument line by line
 * @argc: arg count
 * @argv: vector of arg
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int n;

	if (argc > 0)
	{
		for (n = 0; n < argc; n++)
		{
			printf("%s\n", argv[n]);
		}
	}

	return (0);
}
