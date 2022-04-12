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
	int i;

	for (i = 0; src[i]; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
