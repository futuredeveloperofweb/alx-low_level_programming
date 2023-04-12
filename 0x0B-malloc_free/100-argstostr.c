#include "main.h"
#include <stdlib.h>
/**
 * free_grid - free the grid
 * @grid: grid of memory
 * @hight: int
 * Return: void
 */
void free_grid(int **grid, int hight)
{
	int i = 0;

	for (; i < hight; i++)
		free(grid[i]);
	free(grid);
}
