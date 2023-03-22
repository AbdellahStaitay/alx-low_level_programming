#include "function_pointers.h"
/**
 * array_iterator - entry point
 * @array: input
 * @size: input
 * @action: input
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}
	else
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
