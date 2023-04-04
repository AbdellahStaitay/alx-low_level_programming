#include "lists.h"
/**
 * add_nodeint_end - add node to the list
 * @head: linked lists
 * @n: input
 * Return: number of nodes
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *last, *ptr = malloc(sizeof(listint_t));

	if (!ptr)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		*head = ptr;
	}
	else
	{
		last = *head;
		while (last != NULL)
		{
			last = last->next;
		}
		last->next = ptr;
	}
	return (*head);
}
