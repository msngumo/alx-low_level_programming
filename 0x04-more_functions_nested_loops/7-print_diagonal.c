#include "main.h"

/**
 * print_diagonal - draws a straight line in the terminal
 *
 * @n: number of times character _ be printed
 *
 */

void print_diagonal(int n)
{
	if (n >= 1)
	{
		int x = 1;

		for (; x <= n; x++)
		{
			_putchar(' ');
			for (; x <= n; x++)
			{
				_putchar('\\');
			}
		}
	}

	else if (n <= 0)
	{
		_putchar('\n');
	}
}
