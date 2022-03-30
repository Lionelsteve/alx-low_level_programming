#include <stdio.h>

/**
 * main prints all possible different combinaitions pf three digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, k;

	for (i = 48; i <= 56; i++)
	{
		for (j = 49; j <= 57; j++)
		{
			for (k = 50; k <= 57; k++)
			{
				if ((k > j) && (j > i))
				{
					putchar(i);
					putchar(j);
					putchar(k);
					if (i != 56 || j != 57)
					{
						putchar(44);
						putchar(32);
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
