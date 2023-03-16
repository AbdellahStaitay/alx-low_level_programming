#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * array_range - concatenate strings
 * @min: input
 * @max: input
 * Return: pointer
*/
int *array_range(int min, int max)
{
	int *p;
	int i;
	int j;

	if (min > max)
	{
		return (NULL);
	}
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = min, j = 0; i <= max; i++, j++)
		{
			p[j] = i;
		}
		return (p);
	}
}
