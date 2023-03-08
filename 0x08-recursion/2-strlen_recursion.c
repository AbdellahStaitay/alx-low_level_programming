#include "main.h"
/**
 *  _strlen_recursion - Prints a string, in reverse.
 * @s: input
 * Return: the len of the string
*/
int _strlen_recursion(char *s)
{
	int len = 0;

	if (*s)
	{
		len++;
		len +=  _strlen_recursion(s + 1);
	}
	return (len);
}
