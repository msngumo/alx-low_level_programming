#include <stdio.h>
#include <stdlib.h>
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
	if (argc < 3)
	{
		puts("Error");
		return (1);
	}

	printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
