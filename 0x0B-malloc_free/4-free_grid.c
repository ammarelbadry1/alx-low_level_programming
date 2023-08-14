#include "main.h"
#include <stdlib.h>

/**
 * free_grid - rees a 2 dimensional grid previously created
 *
 * @grid: Grid to be freed
 * @height: Grid height
 *
 * Return: no return
*/

void free_grid(int **grid, int height)
{
	int i;

	i = height - 1;
	while (i >= 0)
	{
		free(grid[i]);
		i--;
	}
	free(grid);
}
