#include "main.h"

/**
 * _strpbrk - gets the length of a prefix substring.
 *
 * @s: source string
 * @accept: substring
 *
 * Return: number of bytes in the initial segment of s
 */

char *_strpbrk(char *s, char *accept)
{
	int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				return (s + a);
		}
	}

	return (0);
}
