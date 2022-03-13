# include <stdio.h>

/**
 * main - Main function
 * Return: 0
 */

int main(void)
{
	int x = 0;

	for (; x <= 9; x++)
	{
		putchar(x + '0');
		if (x == 9)
			;
		else
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
