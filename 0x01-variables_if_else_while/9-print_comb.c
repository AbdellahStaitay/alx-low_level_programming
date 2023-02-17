#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all combinations of single digits
 * Return: Always 0 (success)
 */
int main(void)
{
int num = 0;
while (num <= 9)
{
putchar('0' + num);
num++;
if (num <= 9)
{
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}
