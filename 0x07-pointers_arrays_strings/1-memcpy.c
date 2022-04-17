#include "main.h"

/**
 * _memcpy - copies memory area.
 *
 * @src: source string
 * @dest: desttination strng
 * @n: buffer size
 *
 * Return: a pointer to dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int itter = 0;

	while (itter < n)
	{
		dest[itter] = src[itter];
		itter++;
	}

	return (dest);
}
