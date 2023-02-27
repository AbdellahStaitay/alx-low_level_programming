#include "main.h"

/**
 * _strlen - check the code
 * @s : input
 * Return: Void
 */
int _strlen(char *s)
{
	int len;

	len = 0;
	while (s[len])
	{
		len++;
	}
	return (len);
}
