#include "main.h"

/**
 * _strncpy - concatenates two strings
 *
 * @dest: pointer to string 1
 * @src: pointer to string 2
 * @n: Number of bytes
 *
 * Return: pointer to a concatenated string
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for (; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
