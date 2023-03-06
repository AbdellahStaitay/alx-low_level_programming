#include "main.h"
/**
 * *_memcpy - fills memory with a constant byte.
 * @dest: pointer to put the constant
 * @src: constant
 * @n: max bytes to use
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
