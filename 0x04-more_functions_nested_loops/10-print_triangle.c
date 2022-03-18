#include "main.h"

/**
 * main - Main program
 *
 * @size: size of triangle
 */

void print_triangle(int size)
{
	int i = 1;
	if (size >= 1)
	{
		
		for (; i <= size; i++)
		{
			int j = 1;

			for (; j <= i; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else 
		_putchar('\n');
}
