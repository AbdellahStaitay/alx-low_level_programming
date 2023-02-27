#include "main.h"

/**
 * _strcpy - print `n` elements of an array of integers
 * @dest: input
 * @src: input
 * Return value of _strcpy : *dest
 */

char *_strcpy(char *dest, char *src)
{
	int len = 0;
	int i = 0;

	while (src[len])
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
