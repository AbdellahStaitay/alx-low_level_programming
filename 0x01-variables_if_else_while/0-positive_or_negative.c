#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*
* main - print the nature of the variable n
* if it's <0 negative
* if it's >0 positive
*/
int main(void)
{
int n;
srand(time(0));
n = rand() - RAND_MAX / 2;
if(n < 0)
{
printf("%d is negative\n",n);
}
else if(n > 0)
{
printf("%d is positive\n",n);
}
else
{
printf("%d is zero\n",n);
}
return (0);
}
