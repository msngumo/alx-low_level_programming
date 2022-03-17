#include "main.h"

/**
 * times_table - multiplication of  nine
 *
 */

void times_table(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
	{
		for (y = 0; y <= 9; y++)
		{
			int multi = x * y;

			if (y == 0)
			{
				_putchar('0');
			}
			else if (multi <= 9)
			{
				_putchar(',');
				_putchar(' ');
				_putchar(' ');
				_putchar(multi + '0');
			}
			else
			{
				_putchar(',');
				_putchar(' ');
				_putchar(multi / 10 + '0');
				_putchar(multi % 10 + '0');
			}
		}
		_putchar('\n');

	}
}
