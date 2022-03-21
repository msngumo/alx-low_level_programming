#include "main.h"

/**
 * puts2 - prints every x-ter ,start with first x-ter follow new line
 * @str: string variable
 */

void puts2(char *str)
{
	int iter = 0;

	while (str[iter] != '\0')
	{
		if (iter % 2 == 0)
		{
			_putchar(str[iter]);
		}
		iter++;
	}
	_putchar('\n');
}

