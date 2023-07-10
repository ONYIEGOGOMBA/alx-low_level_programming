#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees the memory allocate for the grid
 * created by alloc_grid()
 * @grid: grid to free
 * @height: height of the grid
 */
void free_grid(int **grid, int height)
{
	int b;

	if (grid == NULL || height == 0)
		return;

	for (b = 0; b < height; b++)
		free(grid[b]);

	free(grid);
}
