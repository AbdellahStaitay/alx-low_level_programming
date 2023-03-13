#include <stdlib.h>
#include <string.h>
#include "main.h"
/**
 * alloc_grid - create array
 * @width: input
 * @height: input
 * Return: poniter or null
*/

int **alloc_grid(int width, int height)
{
	int **p;
	int i;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	p = calloc(height, sizeof(int *));
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		p[i] = calloc(width, sizeof(int));

		if (p[i] == NULL)
		{
			for (; i >= 0; i--)
				free(p[i]);

			free(p);
			return (NULL);
		}
	}
	return (p);
	free(p);
}
