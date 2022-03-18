#include "main.h"

/**
 * more_numbers - prints 10 times numbers from 0 -14
 *
 */

void more_numbers(void)
{
	int x = 1;

	while (x <= 10)
	{
		int y = 0;

		do {

			if (y >= 10 && y <= 14)
			{
				_putchar(y / 10 + '0');
			}
			_putchar(y % 10 + '0');
			y++;
		} while (y <= 14);
		_putchar('\n');
		x++;
	}
}
