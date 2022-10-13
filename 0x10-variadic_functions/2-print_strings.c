#include "variadic_functions.h"

/**
* print_strings - function that print strings
* @separator: string to be printed between strings
* @n: number of string passed to the function
*/
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list list;
	unsigned int i;
	char *str;

	va_start(list, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(list, char *);

	if (str)
		printf("%s", str);
	else
		printf("(nil)");

	if (separator && i < n - 1)
		printf("%s", separator);
	}
	printf("\n");
	va_end(list);
}
