# include<stdio.h>

/**
 * main - Main program
 * Return: 0
 */

int main(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		if (x == 'q' || x == 'e')
			;
		else
			putchar(x);
	}

	putchar('\n');
	return (0);
}
