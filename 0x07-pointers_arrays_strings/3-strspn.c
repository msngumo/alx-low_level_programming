#include "main.h"

/**
 * _strspn - gets the length of a prefix substring.
 *
 * @s: source string
 * @accept: substring
 *
 * Return: number of bytes in the initial segment of s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a, b, x;

	a = 0;
	x = 0;

	while (s[a] != '\0')
	{
		b = 0;
		while (accept[b] != '\0')
		{
			if (s[a] == accept[b])
			{
				x++;
				break;
			}
			b++;
		}
		if (accept[b] == '\0')
			break;
		a++;
	}
	return (x);
}
