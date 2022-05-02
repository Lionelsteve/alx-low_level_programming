#include "main.h"

/**
 * *infinite_add - adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: The buffer that the function 
 * will us to store result
 * @size_r: The buffer size
 *
 * Return: A pointer to the result
 * Always positive numbers or 0
 * There will only be digits in strings n1 and n2
 * If the result cannot be stored in r: Return 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	if (n1 + n2 <= sizeof(r))
	{
		return (0);
	}
	else
	{
		return *(n1 + n2);
	}
}
