#include <stdio.h>
#include "main.h"

/**
* _puts - prints a string
* @str: string to print
*
* Description: prints a string
* On success: returns no error
*/

void _puts(char *str)
{
	int i;

	for (i = 0; *(str + 1) != '\0'; i++)
	{
		putchar(*(str + 1));
	}
	putchar('\n');
}
