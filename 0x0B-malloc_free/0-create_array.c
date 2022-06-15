#include "main.h"
#include <stdlib.h>
/**
 * *create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: character to initialize the array with
 *
 * Return: NULL if size = 0 or if it fails
 * a pointer to the array (Success)
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}

	s = malloc(size * sizeof(char));

	if (s == NULL)
	{
		return (NULL);
	}
	
	for (i = 0; i < size; i++)
	{
		s[i] = c;
	}

	return (s);
}
