#include <stdio.h>
/**
 * print - Entry point
 * Description: printd string
 * Return: Always 0 (success)
 */
int prints(void)
{
    printf("_putchar\n");
    return (0);
}
/**
 * print_alphabet - Entry point
 * Description: printd alphabet
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