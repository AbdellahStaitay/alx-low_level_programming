#include "main.h"
/**
 * *_strspn - fills memory with a constant byte.
 * @s: pointer to put the constant
 * @accept: constant
 * Return: dest
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int len = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				len++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (len);
		}
		s++;
	}
	return (len);
}
