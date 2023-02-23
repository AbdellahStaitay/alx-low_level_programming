#include "main.h"
/**
 * _isupper - Entry point
 * @c : input
 * Return: Always 0 (success)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
