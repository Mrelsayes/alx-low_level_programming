#include "main.h"
/**
 * free_grid - rees a 2d grid
 * @grid: 2d array
 * @height: row of 2d array
*/
void free_grid(int **grid, int height)
{
	int h;

	for (h = 0; h < height; h++)
	{
		free(grid[h]);
	}
	free(grid);
}
