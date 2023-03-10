#include <stdio.h>
#include <stdlib.h>
/**
 * main - print the name of the file
 * @argc: the counter of the command line arguments
 * @argv: the arguemnet
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int res;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		res = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", res);
		return (0);
	}
}
