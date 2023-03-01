#include "main.h"
/**
 * *string_toupper - upper string
 * @text: input
 * Return:pinter
 */

char *string_toupper(char *text)
{
	int i;
	int len = 0;

	for (i = 0; text[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (text[i] >= 97 && text[i] <= 122)
		{
			text[i] = text[i] - 32;
		}
	}
	return (text);
}
