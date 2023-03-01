#include "main.h"
/**
 * *cap_string - upper string
 * @text: input
 * Return:pinter
 */

char *cap_string(char *text)
{
	int i;
	int len = 0;

	for (i = 0; text[i] != '\0'; i++)
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		if (text[i] == ',' || text[i] == ';' || text[i] == '.' ||
		text[i] == '!' || text[i] == '?' || text[i] == '"' ||
		text[i] == '(' || text[i] == ')' || text[i] == '{' ||
		text[i] == '}' || text[i] == '\n' || text[i] == ' ' ||
		text[i] == '\t' || text[i] == 0)
		{
			if (text[i + 1] >= 97 && text[i + 1] <= 122)
			{
				text[i + 1] = text[i + 1] - 32;
			}
		}
	}
	return (text);
}
