#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds positive numbers
 * @argc: Number of arguments
 * @argv: Array of arguments
 *
 * Return: 0 (Success), 1 (Error)
 */
int main(int argc, char *argv[])
{
	int i, j, sum;

	if (argc == 1)
	{
		printf("0\n");
	}
	for (i = 0; argv[i] != '\0'; i++)
	{
		if (atoi(argv[i]) <= '0' || atoi(argv[i]) >= '9')
		{
			printf("Error\n");
			return (1);
		}
	}
	for (j = 0; argv[j] != '\0'; j++)
	{
		sum += atoi(argv[j]);
	}
	printf("%d", sum);
	return (0);
}
