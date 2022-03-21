#include "main.h"

/**
 * swap_int - swap the values of two integers
 * @a: variable for first integer
 * @b: variable to second integer
 */

void swap_int(int *a, int *b)
{
	int first = *b;
	int sec = *a;

	*a = first;
	*b = sec;
}

