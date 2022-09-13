#include "main.h"

/**
 * main - print void
 *
 * Description: code tp print alphabet
 * Return: 0
 */
void print_alphabet(void)
{
	int ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
	return (0);
}
