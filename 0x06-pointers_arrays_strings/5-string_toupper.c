#include "main.h"

/**
 * string_toupper - changes lowercase letters to uppercase
 *
 * @str: pointer to a sing to be converted
 *
 * Return: pointer to a converted sing
 */

char *string_toupper(char *str)
{
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		if (str[a] >= 'a' && str[a] <= 'z')
			str[a] -= 32;
	}

	return (str);
}
