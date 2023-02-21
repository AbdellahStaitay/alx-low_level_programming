#include "main.h"
/**
 * main - Entry point
 * Description: prints string
 * Return: Always 0 (success)
 */
int main(void)
{   
	char text[] = "_putchar";
	int i = 0;
	while (i <= 7)
	{
		_putchar(text[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
