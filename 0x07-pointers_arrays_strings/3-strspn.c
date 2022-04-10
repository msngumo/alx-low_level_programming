#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 *
 * @s: string
 * @accept: checker
 * Return: s
 */

unsigned int _strspn(char *s, char *accept)
{
	int a = 0;
	int b = 0;
	int c = 1;

	for (; s[a] != '\0'; a++)
	{
		for (; accept[b] != '\0'; b++)
		{
			if (s[a] == accept[b])
				a++;
			c++;
				
		}
	}
	return (c);
}
