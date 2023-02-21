#include "main.h"
/**
 *_isalpha - check for lower case letters
 *@c: input.
 *
 *Return: 1 if c is lowercase
 * 0 if c is anyhting else.
 */
int _isalpha(int c)
{
	if (c >= 'A' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
