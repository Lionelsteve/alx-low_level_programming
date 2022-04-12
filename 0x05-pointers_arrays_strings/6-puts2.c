#include "main.h"

/**
 * puts2 - prints every other character of string,
 * starting with the first character,
 * followed by a new line
 * @str: the string to be printed
 */
void puts2(char *str)
{
	int i;

	for (i = 0; str[i] && i != '\0'; i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
