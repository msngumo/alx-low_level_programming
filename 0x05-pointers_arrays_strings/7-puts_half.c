#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string followed by new line
 * @str: variable
 */

void puts_half(char *str)
{
	int a = 0;
	int b = 0;

	if (_strlen(str) % 2 != 0)
	{
		b += 1;
	}
	for (a = (_strlen(str) + b) / 2; a < _strlen(str); a++)
		_putchar(str[a]);
	_putchar('\n');
}
