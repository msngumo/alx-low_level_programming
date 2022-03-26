#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: destination string
 * @src: source string
 * @n: number of bytes from source
 *
 * Return: dest
 */

char *_strncat(char *dest, char *src, int n)
{
	int x = 0;
	int y = 0;

	for (; *(dest + x) != '\0'; x++)
		;
	for (; *(src + y) != '\0' &&  n > 0; y++, n--, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
