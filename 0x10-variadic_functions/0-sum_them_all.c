#include "variadic_functions.h"

/**
* sum_them_all - func that returns the sum of all parameters
* @n: number of parameters
* Return: sum
*/
int sum_them_all(const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
		sum += va_arg(list, int);

	va_end(list);
	return (sum);
}
