#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: number of times character _ be printed
 *
 */

void print_line(int n)
{
	if (n >= 1)
	{
		int x = 1;

		for (; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}

	else if (n <= 0)
	{
		_putchar('\n');
	}
}
