#include "lists.h"
/**
 * free_listint - add node to the list
 * @head: linked lists
 * Return: Void
*/
void free_listint(listint_t *head)
{
	free(head);
}
