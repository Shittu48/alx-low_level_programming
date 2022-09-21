#include "main.h"

/**
 * _strcat - concatenatesthe string pointed to by the
 * @src to the end of the string pointed to by @dest
 * @dest: String that will be appended
 * @src: String to ne concatenated upon
 *
 * Return: Returns pointer to @dest
 */

char *_strcat(char *dest, char *src)
{
	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
