#include "main.h"

/**
 * _memset - fills memory with a constant byte
 *
 * @s: string
 * @b: constant byte
 * @n: buffer size
 *
 * Return: a pointer to the memory area s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x = 0;

	while (x < n)
	{
		s[x] = b;
		x++;
	}

	return (s);
}
