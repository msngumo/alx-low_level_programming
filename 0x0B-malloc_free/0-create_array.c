#include "main.h"
#include <stdlib.h>

/**
 * create_array - creates an array of chars
 *
 * @size: size of array
 * @c: character to initialize with
 *
 * Return: NULL or pointer to arrar
 */

char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int iter = 0;


	if (size == 0)
		return (NULL);

	ptr = malloc(size * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (; iter < size; iter++)
		*(ptr + iter) = c;

	return (ptr);
}
