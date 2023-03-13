#include <stdlib.h>
#include "main.h"
/**
 * create_array - create array
 * @size: input
 * @c: input
 * Return: poniter or null
*/

char *create_array(unsigned int size, char c)
{
	char *p;
	int i;

	if (size == 0)
	{
		return (0);
	}
	else
	{
		p = malloc(size + 1);
		if (p == 0)
		{
			return (0);
		}
		else
		{
			for (i = 0; *p; i++)
			{
				*(p + i) = c;
			}
			return (p);
		}
	}
}
