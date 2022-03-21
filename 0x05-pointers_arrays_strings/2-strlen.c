#include "main.h"

/**
 * _strlen - prints length of string
 * @s: variable for string
 *
 * Return: len of string
 */

int _strlen(char *s)
{
	int iter = 0;

	while (s[iter] != '\0')
	{
		iter++;
	}

	return (iter);
}
