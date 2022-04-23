#include "main.h"

/**
 * _strncat - concatenates two strings
 *
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * @n: Number of bytes
 *
 * Return: pointer to a concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	int a = 0;
	int b = 0;

	while (*(dest + a))
		a++;

	while (b < n && src[b])
	{
		*(dest + a + b) = src[b];
		b++;
	}


	return (dest);
}
