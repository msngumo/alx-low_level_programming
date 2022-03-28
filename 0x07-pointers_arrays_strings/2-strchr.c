#include "main.h"

/**
 * _strchr - locates a character in a string
 *
 * @s: string
 * @c: character
 * Return: pointer to c or null if c not found
 */

char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (s + i);
		else if ((s[i] + 1) == c)
			return (s + 1);
	}
	return (s);
}
