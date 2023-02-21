#include <stdio.h>
/**
 *print_times_table - n times table.
 *@n: the number defines the table.
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
