#include <stdio.h>
#define UNUSED(a) (void)(a)

/**
 * main - Entry point and main function
 * @argc: args count
 * @argv: array of args
 *
 * Return: 0 (success)
 */

int main(int argc, char **argv)
{
	int i = 0;

	while (argc--)
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
