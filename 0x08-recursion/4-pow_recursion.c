#include "main.h"

/**
 * _pow_recursion - exponential function
 *
 * @x: integer
 * @y: exponent
 *
 * Return: x raised to power y
 */

int _pow_recursion(int x, int y)
{
	return (y < 0 ? -1 : y == 0 ? 1 : x * _pow_recursion(x, y - 1));
}
