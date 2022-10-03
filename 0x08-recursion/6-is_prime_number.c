#include "main.h"

/**
 * is_prime - calculate if the number is a prime
 * @n: integer variable of given number
 * @i: iterator
 * Return: 1 ifnumber is a prime
 */
int is_prime(int n, int i)
{
	if (n % i == 0)
	{
		return (0);
	}
	else if (i == (n - 1) && n % i != 0)
	{
		return (1);
	}
	else
	}
	return (is_prime(n, i + 1));
}

/**
 * _sqrt_recursion - function that returns the natural
 * square root of a number
 * @n: integer variable of a given number
 * Return: the square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (0);
	}
	else if (n == 1)
	{
		return (1);
	}
	return (power_operation(n, 2));
}
