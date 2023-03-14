#include "main.h"

/**
 *free_grid - free memory allocated by a 2d array
 *@grid: the 2d array
 *@height: number of lines
 *Return: void returns nothing
 */

void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
