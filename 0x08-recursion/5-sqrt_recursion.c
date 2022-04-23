#include "main.h"

/**
 * check - checker
 *
 * @a: integer
 * @b: integer
 *
 * Return: square root
 */

int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}

/**
 * _sqrt_recursion - finds square root
 *
 * @n: number to second expo
 * Return: square root
 */

int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}

