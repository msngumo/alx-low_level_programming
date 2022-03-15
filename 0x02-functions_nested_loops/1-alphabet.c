#include "main.h"

/**
 * print_alphabet - lowercase alphabet
 */

void print_alphabet(void)
{
	int x = 97;

	do {
		_putchar(x);
		x++;
	} while (x <= 122);
	_putchar('\n');
}
