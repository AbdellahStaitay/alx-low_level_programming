#include "main.h"
/**
 *_abs - check for lower case letters
 *@n: input.
 *
 *Return: 1 if c is lowercase
 * 0 if c is anyhting else.
 */
int _abs(int n)
{
	if (n > 0)
	{
		return (n);
	}
	else if (n < 0)
	{
		return (n * -1);
	}
	else
	{
		return (0);
	}
}
