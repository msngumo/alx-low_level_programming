#include "main.h"

/**
 * print_square - prints a square
 *
 * @size: size of square
 */

void print_square(int size)
{
	if (size >= 1)
	{
		int i = 1;

		for (; i <= size; i++)
		{
			int j = 1;

			for (; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else if (size <= 0)
	{
		_putchar('\n');
	}
}
