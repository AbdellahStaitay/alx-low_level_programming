#include <stdio.h>
/**
 * print - Entry point
 * Description: printd string
 * Return: Always 0 (success)
 */
int print(void)
{
    printf("_putchar\n");
    return (0);
}

void print_alphabet(void)
{
    for (int i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
    }
    putchar('\n');
}