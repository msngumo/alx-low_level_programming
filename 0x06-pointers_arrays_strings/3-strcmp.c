#include "main.h"

/**
 * _strcmp - compares two strings
 *
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 s1 == s2, -ve s1 < s2, +ve s1 > s2
 */

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	for (; *(s1 + i) != '\0'; i++)
		break;
	for (; *(s2 + i) != '\0'; i++)
		break;
	if (s1[i] == s2[i])
		return (0);
	else if (s1[i] < s2[i])
		return (-);
	else
		return(+);
	return (0);
}
