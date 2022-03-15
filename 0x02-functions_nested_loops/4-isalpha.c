#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: character
 * Return: 1 if c is letter, lowercase or uppercase and 0 otherwise
 */

int _isalpha(int c)
{
	return ((c >= 97 && c <= 122) || (c >= 65 && c <= 90));
}
