#include <stdio.h>

int main(void)
{
	int i, j, rows;
	for (i = 1; i <= 14; ++i)
	{
		printf(" ");
		for (j = 1; j <= i; ++j)
		{
			printf("\\");
		}
		printf("\n");
	}
}
