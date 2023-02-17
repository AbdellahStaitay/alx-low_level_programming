#include <stdio.h>
/**
 * main - Entry point
 * Description: prints all single digits in hexadicimal
 * Return: Always 0 (success)
 */
int main(void)
{
int num = 0;
char ch = 'a';
while (num <= 9)
{
putchar('0' + num);
num++;
}
while (ch <= 'f')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);
}
