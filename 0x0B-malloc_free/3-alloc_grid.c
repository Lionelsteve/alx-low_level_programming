#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid - returns a pointer to a 2 dimensional array of integers
 * Each element of the grid is initialized to 0
 * @width: number of column
 * @height: number of row
 *
 * Return: NULL If width or height is 0 or negative (Failure)
 * a pointer to the array (Success)
 */
int **alloc_grid(int width, int height)
{
	char **arr;
	int i, j;

	if ((width <= 0) || (height <= 0))
		return (NULL);
	arr = (int **)malloc(sizeof(int *) * height);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(sizeof(int) * width);
		if (arr[i] == NULL)
		{
			free(arr);
			for (j = 0; j <= n; j++)
				free(arr[j]);
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
		{
			arr[i][j] = 0;
		}
	}
	return (arr);
}
