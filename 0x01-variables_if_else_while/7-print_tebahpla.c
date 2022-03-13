# include <stdio.h>

/**
 * main - Main function
 * Return: o
 */

int main(void)
{
	int ascii = 122;

	for (; ascii >= 97; ascii--)
		putchar(ascii);
	putchar('\n');

	return (0);
}
