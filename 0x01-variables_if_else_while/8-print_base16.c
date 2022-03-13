# include <stdio.h>

/**
 * main - Main program
 * Return: 0
 */

int main(void)
{
	int x, y;

	for (x = 0; x <= 9; x++)
		putchar(x + '0');
	for (y = 97; y <= 102; y++)
		putchar(y);
	putchar('\n');
	return (0);
}
