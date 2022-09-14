#include "main.h"
/**
 * main - printing
 *
 * Description: main
 *
 * Returm: Always 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	{
	return (0);
	}	
}
