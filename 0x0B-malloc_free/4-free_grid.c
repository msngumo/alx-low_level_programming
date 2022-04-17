#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a grid
 *
 * @grid: reference grid
 * @height: rows
 */

void free_grid(int **grid, int height)
{
	int iter = 0;

	if (height <= 0)
		return;
	if (grid == NULL)
		return;

	while (iter < height)
	{
		free(grid[iter]);
		iter++;
	}
	free(grid);
}
