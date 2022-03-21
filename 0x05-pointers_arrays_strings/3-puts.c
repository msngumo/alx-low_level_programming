#include "main.h"

/**
 * _puts - prints a string
 * @str: variable for string
 *
 */

void _puts(char *str)
{
	int iter = 0;

	while (str[iter] != '\0')
	{
		_putchar(str[iter]);
		iter++;
	}

	_putchar('\n');
}
