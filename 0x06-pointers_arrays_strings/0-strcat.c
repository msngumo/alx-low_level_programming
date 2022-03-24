#include "main.h"

/**
 * _strcat - concatenates two strings
 * @dest: destination string
 *
 * @src: source string
 * Return: dest
 */

char *_strcat(char *dest, char *src)
{
	int x = 0;
	int y = 0;

	for (; *(dest + x); x++)
		;
	for (; *(src + y); y++, x++)
	{
		dest[x] = src[y];
	}
	return (dest);
}
