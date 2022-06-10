#include <stdio.h>
#include "main.h"
/**
 * main - multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])

	if (argc != 3)
	{
		printf("Error\n");
		return (-1);
	}
	else
	{
		printf("%d\n", argv[1] * argv[2]);
		return (0);
	}
}
