#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
* main - entry point
* description : prints the last degit and its nature based on conditionT
*/
int main(void)
{
	int n;
    int m;
	srand(time(0));
	n = rand() - RAND_MAX / 2;
	m = n % 10;
    printf("Last digit of %d is %d ", n, m);
    if (n > 5)
    {
        printf("and is greater than 5\n");
    }
    else if (n == 0)
    {
        printf("and is 0\n");
    }
    else if (n < 6 || n != 0)
    {
        printf("and is less than 6 and not 0\n");
    }
	return (0);
}