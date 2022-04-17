#include "main.h"
#include <stdlib.h>

/**
 * _strdup - duplicates a string
 *
 * @str: size of array
 *
 * Return: NULL or pointer to arrar
 */

char *_strdup(char *str)
{
	char *ptr;
	int iter = 0;
	int mem;

	if (str == NULL)
		return (NULL);

	while (*(str + iter))
		iter++;

	ptr = malloc(iter * sizeof(char) + 1);

	if (ptr == NULL)
		return (NULL);

	for (mem = 0; mem < iter; mem++)
		ptr[mem] = str[mem];
	return (ptr);
}
