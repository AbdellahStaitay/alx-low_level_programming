#include "main.h"
/**
 * *leet - upper string
 * @text: input
 * Return:pinter
 */

char *leet(char *text)
{
	int i;
	int len = 0;

	for (i = 0; text[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (text[i] == 'a' || text[i] == 'A')
		{
			text[i] = '4';
		}
		if (text[i] == 'e' || text[i] == 'E')
		{
			text[i] = '3';
		}
		if (text[i] == 'o' || text[i] == 'O')
		{
			text[i] = '0';
		}
		if (text[i] == 't' || text[i] == 'T')
		{
			text[i] = '7';
		}
		if (text[i] == 'l' || text[i] == 'L')
		{
			text[i] = '1';
		}
	}
	return (text);
}
