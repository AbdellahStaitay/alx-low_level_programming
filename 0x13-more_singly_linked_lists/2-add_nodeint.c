#include "lists.h"
/**
 * add_nodeint - add node to the list
 * @head: linked lists
 * @n: input
 * Return: number of nodes
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (!ptr)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}
