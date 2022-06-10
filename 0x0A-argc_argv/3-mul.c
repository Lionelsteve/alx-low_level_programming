#include <stdio.h>
#include "main.h"
/**
 * _atoi - converts a string to an integer
 * @s: String to convert
 *
 * Return: The int converted from the string
 */
int _atoi(char *s)
{
	int sign = 1, result = 0, i = 0;

	if (s[0] == '-')
	{
		sign = -1;
		i++;
	}
	for (; s[i] != '\0'; ++i)
	{
		if (s[i] <= '0' || s[i] >= '9')
			return (0);
		result = result * 10 + s[i] - '0';
	}
	return (sign * result);
}

/**
 * main - multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = _atoi(argv[1]);
	num2 = _atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		printf("%d\n", num1 * num2);
		return (0);
	}
}
