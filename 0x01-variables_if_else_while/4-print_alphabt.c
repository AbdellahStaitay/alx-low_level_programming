#include <stdio.h>
/**
 * main - Entry point
 * Description: prints the alphabet in lowercase\n
 * Return: Always 0 (success)
 */
int main(void)
{
int ch = 'a';
while (ch <= 'z')
{
if (ch != 'q' && ch != 'e')
{
putchar(ch);
}
ch++;
}
putchar('\n');
return (0);
}
