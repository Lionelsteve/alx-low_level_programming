#include "main.h"

/**
 * *string_toupper - changes all lowercase letters
 * of a string to uppercase
 * @str: string to change in uppercase
 *
 * Return: string in uppercase
 */
char *string_toupper(char *str)
{
	int i, def = 'a' - 'A';

	for (i = 0; str[i]; i++)
	{
		if (str[i] <= 'z' && str[i] >= 'a')
		{
			str[i] -= def;
		}
	}
	return (str);
}	
