#include "main.h"

/**
 * puts_half - prints half of a string,
 * followed by a new line
 * @str: The string wich half will be printed
 */
void puts_half(char *str)
{
	int i, len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	if (((len / 2) % 2) == 0)
	{
		for (i = (len / 2) + 1; i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	else if (((len / 2) % 2) != 0)
	{
		for (i = ((len - 1) / 2); i < len; i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
