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
	UNUSED(argv);
	printf("%d\n", argc - 1);

	return (0);
}
