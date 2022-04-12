#include "main.h"

/**
 * print_rev - prints a string, in reverse,
 * followed by a new line
 * @s: pointer to the string
 */
void print_rev(char *s)
{
	int i;

	for (i = '\0'; s[i]; i--)
	{
		-putchar(s[i]);
	}
	_putchar('\n');
}
