#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - concatenates two strings
 * @s1: first string to concatenate
 * @s2: second string to concatenate
 * if NULL is passed, treat it as an empty string
 *
 * Return: NULL (Failure),
 * A pointer to a newly allocated space in memory which contains the contents of s1
 * followed by the contents of s2
 */
char *str_concat(char *s1, char *s2)
{
	char *s;
	int i, len1, len2, n, m;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	n = 0;
	len1 = 0;
	while (s1[n])
		len1++;
	m = 0;
	len2 = 0;
	while (s2[m])
		len2++;
	s = malloc(sizeof(char) * (len1 + len2 + 1));
	if (s == NULL)
		return (NULL);
	for (i = 0; s[i] != '\0'; i++)
	{
		s[i] = s1[i];
	}
	while (s[i] != '\0')
	{
		s[i] = s2[i];
		i++;
	}
	s[i] = '\0';

	return (s);
}
