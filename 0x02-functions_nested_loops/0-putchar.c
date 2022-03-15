#include "main.h"

/**
 * main -  Main program
 *
 * Return: On success 1.
 */

int main(void)
{
	char *str = "_putchar";

	while (*str)
	{
		_putchar(*str++);
	}
	_putchar('\n');
	return (0);
}
