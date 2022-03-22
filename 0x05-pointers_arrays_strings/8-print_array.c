#include "main.h"
#include <stdio.h>

/**
 * print_array - prints array
 *
 * @a: elements of an array
 * @n: number of elements of array to be printed
 */

void print_array(int *a, int n)
{
	int b = 0;

	for (n--; n >= 0; n--, b++)
	{
		printf("%d", *(a + b));
		if (n > 0)
			printf(", ");
	}
	printf("\n");
}
