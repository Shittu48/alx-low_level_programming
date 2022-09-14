#include "main.h"
/**
 * Descriptio: printing the last digit
 */
int print_last_digit(int n)
{
	int last_digit = n % 10;

	if (last_digit < 0)
		last digit *= -1;

	_putchar(last_digit * '0');
	return (last_digit);
}
