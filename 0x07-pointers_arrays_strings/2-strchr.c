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
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (*s == c)
	{
		return (s);
	}
	return (NULL);
}
