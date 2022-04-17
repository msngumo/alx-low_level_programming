#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - deals with 2d array
 *
 * @width: columns
 * @height: rows
 *
 * Return: pointer to a 2d array
 *
 */

int **alloc_grid(int width, int height)
{
	int a = 0;
	int b = 0;
	int **ptr;

	if (width <= 0 || height <= 0)
		return (NULL);

	ptr = (int **) malloc(height * sizeof(int *));

	if (ptr == NULL)
	{
		return (NULL);
	}

	for (; a < height; a++)
	{
		*(ptr + a) = (int *)(malloc(sizeof(int) * width));
			if (*(ptr + a) == NULL)
			{
				while (b < a)
				{
					free(ptr[b]);
					b++;
				}
			free(ptr);
			}

	}
	while (a < height)
	{
		while (b < width)
		{
			ptr[a][b] = 0;
			b++;
		}
		a++;
	}
	return (ptr);
}
