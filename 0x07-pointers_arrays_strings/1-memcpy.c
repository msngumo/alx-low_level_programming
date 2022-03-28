#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @dest: destination string
 * @src: source string
 * @n: buffer size
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}