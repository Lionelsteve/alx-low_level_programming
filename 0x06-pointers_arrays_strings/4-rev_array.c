#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers
 * @n: number of elements of the array
 * @a: The array to be reversed
 */
void reverse_array(int *a, int n)
{
	int i, j;

	for (i = n; a[i] != '\0' && i >= 0; i--)
	{
		for (j = 0; j <= i; j++)
		{
			a[j] = a[i];
		}
	}
}
