#include "main.h"

/**
 * print_alphabet_x10 - lowercase alphabet X 10
 */

void print_alphabet_x10(void)
{
	int y = 1;

	while (y <= 10)
	{
		int x = 97;

		do {
			_putchar(x);
			x++;
		} while (x <= 122);
		_putchar('\n');
	y++;
	}
}
