#include "main.h"

/**
 * _strlen - check the code
 * @s : input
 * Return: Void
 */
int _strlen(char *s)
{
	int len;
	int i;

	len = 0;
	while (s[i] != '\0')
	{
		len++;
		i++;
	}
	return (len);
}
