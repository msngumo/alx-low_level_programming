#include "main.h"

/**
 * factorial - factorial of a number
 *
 * @n: number to factorize
 * Return: factorial of a number
 */

int factorial(int n)
{
	return (n == 0 || n == 1 ? 1 : n < 0 ? -1 : n * factorial(n - 1));
}

