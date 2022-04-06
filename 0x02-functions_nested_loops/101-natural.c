#include <stdio.h>

/**
 * main - computes and prints the sum of all multiples
 * of 3 or 5 below 1024
 * Return: Always 0 (success)
 */
int main(void)
{
	unsigned long int s;
	int i;

	s = 0;
	for (n = 0; n < 1024; n++)
	{
		if (((n % 3) == 0) || ((n % 5) == 0))
		{
			s = s + n;
		}
	}
	printf("%lu\n", s);
	return (0);
}
