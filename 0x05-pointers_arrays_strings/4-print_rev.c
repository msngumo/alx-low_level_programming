#include "main.h"
#include "2-strlen.c"

/**
 * print_rev - prints a string in reverse
 * @s: variable for string
 *
 */

void print_rev(char *s)
{
	int iter = 0;

	for (iter = _strlen(s) - 1; iter >= 0; iter--)
		_putchar(s[iter]);

	_putchar('\n');
}
