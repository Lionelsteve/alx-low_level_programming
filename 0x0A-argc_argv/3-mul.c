#include <stdio.h>
#include <stdlib.h>
/**
 * main - multiplies two numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int num1, num2;

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", num1 * num2);
		return (0);
	}
}
