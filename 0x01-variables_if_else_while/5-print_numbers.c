#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digits
 * Return: Always 0 (success)
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
if (num % 2 == 1)
{
printf("%d", num);
}
num++;
}
putchar('\n');
return (0);
}
