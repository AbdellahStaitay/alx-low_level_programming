#include "lists.h"
/**
 * print_listint - print element of list
 * @h: linked lists
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	listint_t *tmp = malloc(sizeof(listint_t));
	size_t nodes;

	nodes = 0;
	if (tmp == NULL)
	{
		return (1);
	}
	tmp = h;
	for (tmp; tmp->next != '\0'; tmp = tmp->next)
	{
		printf("%d\n", tmp->n);
		nodes++;
	}
	return (nodes);
}
