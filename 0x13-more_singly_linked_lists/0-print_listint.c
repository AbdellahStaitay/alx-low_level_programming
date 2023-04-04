#include "lists.h"
/**
 * print_listint - print element of list
 * @h: linked lists
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *tmp;
	size_t nodes;

	nodes = 0;
	tmp = h;
	if (tmp == NULL)
	{
		return (1);
	}
	for (tmp; tmp->next != '\0'; tmp = tmp->next)
	{
		printf("%d\n", tmp->n);
		nodes++;
	}
	return (nodes);
}
