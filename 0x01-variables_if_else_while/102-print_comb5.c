#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all combinations of single digits using ASCII
 * Return: Always 0 (success)
 */
int main(void)
{
	int i, j, h, k;

	for (i = 48; i <= 57; i++)
	{
		for (j = 48; j <= 57; j++)	
		{
            for (h = 48; h <= 57; h++)
	        {
		        for (k = 48; k <= 57; k++)
                {
                   if (((i + j) < (h + k) && (i <= h)) || i < h)
                   {
                        putchar(i);
                        putchar(j);
                        putchar(' ');
                        putchar(h);
                        putchar(k);
                        if (i+j+h+k == 227 && i == 57 )
                        {
                            break;
                        }
                        else
				        {
					        putchar(44);
					        putchar(32);
				        }
                   }
                }
            }
        }    
    }
    putchar(10);
	return (0);
}

