#include "main.h"

/**
 * reverse_array - compares two strings
 *
 * @a: array
 * @n: array size
 */

void reverse_array(int *a, int n)
{
	int x = 0;
	int temp;

	for (; x < n / 2; x++)
	{
		temp = *(a + x);
		*(a + x) = a[n - x - 1];
		a[n - x - 1] = temp;
	}

}
