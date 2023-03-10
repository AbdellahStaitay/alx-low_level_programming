#include <stdio.h>
/**
 * main - print the name of the file
 * @argc: the counter of the command line arguments
 * @argv: the arguemnet
 * Return: always 0
*/
int main(int argc, char *argv[])
{
	int i;

	if (argc == 1)
		printf("%d\n", argc - 1);
	else
	{
		for (i = 0; *argv; i++, argv++)
			;
		printf("%d\n", i - 1);
	}
	return (0);
}
