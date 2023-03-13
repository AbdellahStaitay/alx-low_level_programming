#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * free_grid - create array
 * @grid: input
 * @height: input
 * Return: poniter or null
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
}
