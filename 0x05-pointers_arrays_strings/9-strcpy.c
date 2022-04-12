#include "main.h"

/**
 * *_strcpy - copies the sting pointed by @src,
 * including the terminating null byte (\0),
 * to the buffer pointed by @dest
 * Return: the pointer to @dest
 *
 * @dest: Where the string is copied
 * @src: The string that is copied
 */
char *_strcpy(char *dest, char *src)
{
	int i, j;

	for (i = 0; src[i]; i++)
	{
		for (j = 0; dest[j]; j++)
		{
			src[i] = dest[j];
		}
	}
	return (dest);
}
