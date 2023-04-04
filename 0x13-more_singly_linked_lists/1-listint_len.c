#include "lists.h"
/**
 * listint_len - print element of list
 * @h: linked lists
 * Return: number of nodes
*/
size_t listint_len(const listint_t *h)
{
	const listint_t *tmp = malloc(sizeof(listint_t));
	size_t nodes;

	nodes = 0;
	if (tmp == NULL)
	{
		return (1);
	}
	tmp = h;
	while (tmp != NULL)
	{
		nodes++;
		tmp = tmp->next;
	}
	return (nodes);
}
