#include "function_pointers.h"
/**
 * print_name - entry point
 * @name: input
 * @f: input
*/
void print_name(char *name, void (*f)(char *))
{
	if (name == 0 || f == 0)
	{
		return;
	}
	else
	{
		f(name);
	}
}
