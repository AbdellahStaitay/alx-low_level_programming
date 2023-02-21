#include <stdio.h>
/**
 * print - Entry point
 * Description: printd string
 * Return: Always 0 (success)
 */
void print_alphabet(void)
{
    int i;
    for (i = 'a'; i <= 'z'; i++)
    {
        putchar(i);
    }
    putchar('\n');
}