#include "main.h"
/**
 * _strcmp - concatenates @src to @dest
 * @s1: the source string to append to @dest
 * @s2: the destiation string to be concatenated upon
 * Return:the diffrence between the two strings
 */

int _strcmp(char *s1, char *s2)
{
	int i;
	int sum = 0;
	int len1 = 0;
	int len2 = 0;
	int max_len;

	for (i = 0; s1[i] != '\0'; i++)
	{
		len1++;
	}
	for (i = 0; s2[i] != '\0'; i++)
	{
		len2++;
	}
	if (len1 >= len2)
	{
		max_len = len1;
	}
	else
	{
		max_len = len2;
	}
	for (i = 0; i < max_len; i++)
	{
		if (s1[i] != s2[i])
		{
			sum = s1[i] - s2[i];
			break;
		}
	}
	return (sum);
}
