#include "main.h"

/**
 * check - prime checker
 * @a: could be prime
 * @b: counter
 *
 * Return: 1 if prime, 0 otherwise
 */

int check(int a, int b)
{
	if (b >= a && a > 1)
		return (1);
	else if (a % b == 0 || a <= 1)
		return (0);
	else
		return (check(a, b + 1));
}

/**
 * is_prime_number - prime numbers
 *
 * @n: number
 * Return: 1 (prime), 0 otherwise
 */

int is_prime_number(int n)
{
	return (check(n, 2));
}
