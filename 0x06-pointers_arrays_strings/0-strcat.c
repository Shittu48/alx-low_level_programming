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
	int len = 0, i;

	while (dest[len])
		len++;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[len] = src[i];
		len += 1;
	}
	dest[len] = '\0';
		return (dest);
}
