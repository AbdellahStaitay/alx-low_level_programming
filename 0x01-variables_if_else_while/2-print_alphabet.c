#include <stdio.h>
/**
* main - entry point
* description : print the alphabet in lower case
* return : always 0
*/
int main(void)
{
char alphabet[] = "abcdefghijklmnopqrstuvwxyz";
int i;
while (i < sizeof(alphabet) / sizeof(alphabet[1]))
{
putchar(alphabet[i]);
i++;
}
putchar('\n');
return (0);    
}