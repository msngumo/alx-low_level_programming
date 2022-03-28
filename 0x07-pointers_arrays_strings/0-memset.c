#include "main.h"

/**
 * _memset - fills memory wiyh a constant byte
 *
 * @s: string
 * @b: constant byte
 * @n: first n bytes of the memory
 *
 * Return: s
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
