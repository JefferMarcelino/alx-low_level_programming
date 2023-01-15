#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - function that creates a 2D array of integers.
 *
 * @width: the width
 * @height: the height
 *
 * Return: a pointer to a 2D array
 */

int **alloc_grid(int width, int height)
{
	int i;
	int **arr;

	if (width <= 0 || height <= 0)
		return (0);

	arr = (int **)malloc(height * sizeof(int *));

	if (!arr)
	{
		free(arr);
		return (0);
	}

	for (i = 0; i < height; i++)
	{
		arr[i] = (int *)malloc(width * sizeof(int));
		if (arr[i] == 0)
		{
			for (i--; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (0);
		}
	}

	return (arr);
}
