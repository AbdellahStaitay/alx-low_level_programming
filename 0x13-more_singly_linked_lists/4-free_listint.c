#include "lists.h"
/**
 * free_listint - add node to the list
 * @head: linked lists
 * Return: Void
*/
void free_listint(listint_t *head)
{
	listint_t *tmp = malloc(sizeof(listint_t));

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
