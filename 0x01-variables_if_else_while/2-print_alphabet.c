#include <stdio.h>
/**
* main - entry point
* description : print the alphabet in lower case
* return : always 0
*/
int main(void)
{
int ch = 'a';
while (ch <= 'z')
{
putchar(ch);
ch++;
}
putchar('\n');
return (0);    
}