#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all combinations of 3 digits using ASCII
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, h;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)
        {
            for (h = 48; h <= 57; h++)
			if (i < j && j < h)
			{
				putchar(i);
				putchar(j);
                putchar(h);
				if (j != 57 || i != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
        }    
	}
	putchar(10);
	return (0);
}
