#include <stdio.h>
/**
 *main - n times table.
 *description: the number defines the table.
 *
 *Return: no return value
 */
int main(void)
{
	int i;
	int sum;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		sum = sum + i;
	}
	printf("%d\n", sum);
	return (0);
}
