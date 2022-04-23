#include "main.h"

/**
 * _strstr - gets the length of a prefix substring.
 *
 * @haystack: source string
 * @needle: substring
 *
 * Return: pointer to the beginning of the located substring
 */

char *_strstr(char *haystack, char *needle)
{
	int a, b, x;

	a = 0;
	x = 0;

	while (haystack[a] != '\0')
	{
		b = 0;
		while (needle[b + x] != '\0' && haystack[a + x] != '\0'
				&& needle[b + x] == haystack[a + x])
		{
			if (haystack[a + x] != needle[b + x])
				break;
			x++;
		}
		if (needle[b + x] == '\0')
			return (&haystack[a]);
		b++;
		a++;
	}
	return (0);
}
