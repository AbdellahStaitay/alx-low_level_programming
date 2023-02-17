#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all combinations of single digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int num1, num2;

	for (num1 = 48; num1 <= 57; num1++)
	{
		for (num2 = 48; num2 <= 57; num2++)
			if (num1 < num2)
			{
				putchar(num1);
				putchar(num2);
				if (num2 != 57 || num1 != 56)
				{
					putchar(44);
					putchar(32);
				}
			}
	}
	putchar(10);
	return (0);
}
