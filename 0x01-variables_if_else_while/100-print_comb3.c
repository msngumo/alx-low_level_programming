# include <stdio.h>

/**
 * main - Main function
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = '0'; x < '9'; x++)
	{
		for (y = x + 1; y <= '9'; y++)
		{
			putchar(x);
			putchar(y);

			if (x == '8' && y == '9')
				;
			else
			{
				putchar(',');
				putchar(' ');
			}
		}

	}
	putchar('\n');
	return (0);
}
