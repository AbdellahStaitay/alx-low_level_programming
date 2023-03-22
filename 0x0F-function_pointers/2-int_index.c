#include "function_pointers.h"
/**
 * int_index - entry point
 * @array: input
 * @size: input
 * @cmp: input
 * Return: integer
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}
	else
	{
		if (size <= 0)
		{
			return (0);
		}
		else
		{
			for (i = 0; i < size; i++)
			{
				if (cmp(array[i]) != 0)
				{
					return (i);
				}
			}
		}
		return (-1);
	}
}
