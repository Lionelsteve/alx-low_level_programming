#include "main.h"

/**
 * *_memcpy - copies memory area
 * @n: number of bytes to copy
 * @src: memory area to be copied
 * @dest: memory area to receive bytes
 *
 * Return: a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
