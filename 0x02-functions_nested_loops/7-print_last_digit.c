#include "main.h"

/**
 * print_last_digit  - prints the last digit
 *
 * @num: character to be tested
 *
 * Return: last digit
 */

int print_last_digit(int num)
{
	int x = _abs(num % 10);

	_putchar(x + '0');

	return (x);
}

/**
 * _abs - computes the absolute value of an integer
 * @n : number to be checked
 *
 * Return: absolute integer for n
 */

int _abs(int n)
{
	return (n < 0 ? -n : n);
}
