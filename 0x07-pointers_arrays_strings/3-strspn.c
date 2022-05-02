#include "main.h"

/**
 * _strspn - gets the lenght of a prefix substring
 * @s: string to search in
 * @accept: substring to find
 *
 * Return: the number of bytes of accept in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				break;
			}
			if (!accept[j])
				break;
		}
	}
	return (i);
}
