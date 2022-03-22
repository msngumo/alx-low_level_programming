#include "main.h"

/**
 * _strcpy - copies a string from src to dest
 *
 * @dest: destination string
 * @src: source string
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
	int iter = 0;

	while (*(src + iter))
	{
		*(dest + iter) = *(src + iter);
		iter++;
	}
	*(dest + iter) = '\0';

	return (dest);
}
