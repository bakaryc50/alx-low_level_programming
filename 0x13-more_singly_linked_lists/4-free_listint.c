#include "lists.h"

/**
 * free_listint - free the linked list
 * @head: the pointer to the first node
 */
void free_listint(listint_t *head)
{
	if (head == NULL)
		return;
	free_listint(head->next);
	free(head);
}
