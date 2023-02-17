#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* Description : prints the last digit and its nature based on condition
* Return value of main : Allways 0 (succes)
*/
int main(void)
{
int n;
int m;
srand(time(0));
n = rand() - RAND_MAX / 2;
m = n % 10;
printf("Last digit of %d is %d ", n, m);
if (m > 5)
{
printf("and is greater than 5\n");
}
else if (m == 0)
{
printf("and is 0\n");
}
else if (m < 6 || m != 0)
{
printf("and is less than 6 and not 0\n");
}
return (0);
}
