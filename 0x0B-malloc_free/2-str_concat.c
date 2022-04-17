#include "main.h"
#include <stdlib.h>

/**
 * str_concat - concatenates two strings using malloc
 *
 * @s1: string 1
 * @s2: string 2
 *
 * Return: pointer to cancatenated string
 */

char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int a, b, c, d;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	for (a = 0; *(s1 + a) != '\0'; a++)
		;
	for (b = 0; *(s2 + b) != '\0'; b++)
		;

	ptr = malloc((a * sizeof(*s1)) + (b * sizeof(*s2)) + 1);
	if (ptr == NULL)
		return (NULL);

	for (c = 0, d = 0; c < (a + b + 1); c++)
	{
		if (c < a)
			ptr[c] = s1[c];
		else
			ptr[c] = s2[d++];
	}

	return (ptr);
}
