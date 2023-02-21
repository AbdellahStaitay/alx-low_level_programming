#include <stdio.h>
/**
 *main - print first 50 fibonacci
 *
 *Return: 0 always.
 */
int main(void)
{
	int count;
	int total;
	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 10; count++)
	{
		sum = fib1 + fib2;
		fib1 = fib2;
		fib2 = sum;

		if (sum % 2 == 0)
		{
			total += sum;
		}
	}
	printf("%d\n", total);
	return (0);
}
