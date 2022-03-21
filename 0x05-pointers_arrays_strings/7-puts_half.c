#include "main.h"
#include "2-strlen.c"

/**
 * puts_half - prints half of a string followed by new line
 * @str: variable
 */

void puts_half(char *str)
{
	int a = _strlen(str) / 2;
	int n = (_strlen(str) - 1) / 2;

	if (_strlen(str) % 2 == 0)
	{
		int iter = a;

		while (iter <= (_strlen(str) - 1))
		{
			_putchar(str[iter]);
			iter++;
		}
	}
	else
	{
		int iter = n;

		while (iter <= _strlen(str) - 2)
		{
			_putchar(str[iter]);
			iter++;
		}
	}
	_putchar('\n');
}
