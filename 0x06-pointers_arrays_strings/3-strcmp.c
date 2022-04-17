#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first strin
 * @s2: second string
 *
 * Return: Always positive (success)
 */

int _strcmp(char *s1, char *s2)
{
	int a = 0;

	while (*(s1 + a) || *(s2 + a))
	{
		if (*(s1 + a) != *(s2 + a))
			return (*(s1 + a) - *(s2 + a));
		a++;
	}

	return (0);

}
