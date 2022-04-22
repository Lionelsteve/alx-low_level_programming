#include "main.h"

/**
 * _strcmp - compares two strings
 * @s1: string to compare
 * @s2: string to compare
 *
 * Return: less than 0 if s1 is less than s2, 0 if they are equal,
 * more than 0 if s1 is greather than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, count1, count2;

	count1 = 1;
	count2 = 1;

	for (i = 0; s1[i] != '\0'; i++)
	{
		count1++;
	}
	for (j = 0; s2[i] != '\0'; j++)
	{
		count2++;
	}
	if ( count1 == count2)
	{
		result = 0;
	}
	else if (count1 < count2 || count1 > count2)
	{
		result = count1 - count2;
	}
	return (result);
}
