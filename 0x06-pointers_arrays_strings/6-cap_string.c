#include "main.h"

/**
 * *cap_string - capitalizes all words of a string
 * @str: string to capitalize words
 * separators of words: space, tabulation, new line,
 * ,,;,.,!,?,",(,),{ and }
 *
 * Return: string with capitalized words.
 */
char *cap_string(char *str)
{
	int i, def = 'a' - 'A';

	for (i = 0; str[i]; i++)
	{
		if (str == ' ' || str == 9
		   || str == '\n' || str
		   == ',' || str == ';'
		   || str == '.' || str
		   == '!' || str ==
		   '?' || str == '"'
		   || str == '(' || str
		   == ')' || str == '{'
		   || str == '}')
		{
			str[i + 1] -= def;
		}
	}
	return (str);
}
