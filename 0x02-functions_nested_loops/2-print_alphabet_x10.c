#include "main.h"
/**
 * main - print alphabets
 *
 * Decription: print alphabets from a to z
 * Return: 0
 */
void print_alphabet_x10(void)
{
	int c, i;

	for (i = '0'; i <= '10'; i++)
	{
		for (c = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		return (0);
}
