#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints sums of diagonal
 *
 * @a: 2d array
 * @size: diagonal size
 */

void print_diagsums(int *a, int size)
{
	int iter;

	int x = 0;
	int y = 0;

	for (iter = 0; iter < size; iter++)
	{
		x += a[(iter * size) + iter];
		y += a[(size - 1) + ((size - 1) * iter)];
	}

	printf("%d, %d\n", x, y);
}
