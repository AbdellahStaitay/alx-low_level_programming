#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all combinations of single digits
 * Return: Always 0 (success)
 */
int main(void)
{
int i, j;
for (i = '0'; i <= '9'; i++)
{
for (j = '0'; j <= '9'; j++)
{
if (i < j)
{
putchar(i);
putchar(j);
if (i != '8' || j != '9')
putchar(',');
putchar(32);
}
}
}
putchar('\n');
return (0);
}
