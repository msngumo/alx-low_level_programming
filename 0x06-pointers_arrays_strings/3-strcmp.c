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

<<<<<<< HEAD
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
=======
>>>>>>> a5691edc22f8df7af3f409cd384e15693f87a882
	return (0);

}
