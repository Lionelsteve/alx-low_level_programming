#include "main.h"

/**
 * *_strncpy - copies a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes to copied
 *
 * Return: pointer to destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0' && i < n; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
