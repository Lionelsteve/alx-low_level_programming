#include "main.h"

/**
 * *_strchr - locates a character in a string
 * @c: character to be located
 * @s: string to search in
 *
 * Return: first occurence of the character c in string s
 * or NULL if the character is not found
 */
char *_strchr(char *s, char c)
{
	unsigned int i;

	for (i = 0; s[i]; i++)
	{
		if (s[i] == 'c')
		{
			return (s);
		}
		else
		{
			return (NULL);
		}
	}
}
