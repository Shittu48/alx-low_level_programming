#include "main.h"

/**
 * s_len - calculates the length of a string
 * @s: original string
 * Return: length of string
 */
int s_len(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + s_len(s + 1));
	}
}

/**
 * pal - check if a string is a palindrome
 * @s: original string
 * @i: initial point of recursion
 * @len: lenth of string
 * Return: 1 if the palindrome otherwise 0
 */
int pal(char *s, int i, int len)
{
	if (*(s + i) == *(s + len - 1 - i) && i == (len / 2))
	{
		return (1);
	}
	else if (*(s + 1) != *(s + len - 1 - i))
	{
		return (0);
	}
	else
	{
		return (pal(s, i + 1, len));
	}
}

/**
 * is_palindrome - check if the string is a palindrome ex ala
 * @s: original string
 * Return: 1 if is a palindrome otherwise 0
 */
int is_palindrome(char *s)
{
	if (pal(s, 0_len(s)) == 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
