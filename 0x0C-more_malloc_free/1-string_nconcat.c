#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - concatenate strings
 * @s1: input
 * @s2: input
 * @n: input
 * Return: pointer
*/
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *p;
	unsigned int i;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	if (n >= sizeof(s2))
	{
		n = sizeof(s2);
	}

	p = malloc(sizeof(s1) + n + 1);
	if (p == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; s1[i] != '\0'; i++)
		{
			p[i] = s1[i];
		}
		for (j = 0; s2[j] && j < n ; j++)
		{
			p[i] = s2[j];
			i++;
		}
		p[sizeof(s1) + n] = '\0';
		return (p);
	}
}
