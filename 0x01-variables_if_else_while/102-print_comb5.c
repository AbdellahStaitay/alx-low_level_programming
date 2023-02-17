#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all combinations of single digits using ASCII
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
        {
				putchar(i);
				putchar(j);
				if (j != 57 || i != 57)
				{
					putchar(44);
					putchar(32);
				}
        }
	}
	putchar(10);
	return (0);
}
