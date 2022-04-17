#include "main.h"

/**
 * _strcat - concatenates two strings
 *
 * @dest: pointer to string 1
 * @src: pointer to string 2
 *
 * Return: pointer to a concatenated string
 */

char *_strcat(char *dest, char *src)
{
	int a = 0;
	int b;

	while (dest[a])
		a++;

	for (b = 0; src[b] != '\0'; b++, a++)
		dest[a] = src[b];

	dest[a] = '\0';

	return (dest);
}
