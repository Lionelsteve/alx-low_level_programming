#include "main.h"

/**
 * *_strncat - concatenates two strings
 * @src: string to concatenate
 * @dest: string to concatenate
 *
 * Return: A pointer to the resulting string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	while (dest[j] != '\0' && j < n)
	{
		src[i] = dest[j];
		j++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
