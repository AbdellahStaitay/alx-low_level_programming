#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all combinations of single digits
 * Return: Always 0 (success)
 */
int main(void)
{
int num = 0;
char ch = 'a';
while (num <= 9)
{
putchar('0' + num);
putchar(',');
putchar(' ');
num++;
}
putchar('\n');
return (0);
}
