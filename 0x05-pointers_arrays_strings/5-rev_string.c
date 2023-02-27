#include "main.h"

/**
 * rev_string - check the code
 * @s : input
 * Return: Void
 */
void rev_string(char *s)
{
	char tmp;
	int len = 0;
	int half;
	int i = 0;

	while (s[len])
	{
		len++;
	}
	half = len / 2;
	while (half--)
	{
		tmp = s[len - i - 1];
		s[len - i - 1] = s[i];
		s[i] = tmp;
		i++;
	}
}
