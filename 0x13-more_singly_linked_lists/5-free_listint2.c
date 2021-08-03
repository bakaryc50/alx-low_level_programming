#include "lists.h"

/**
 * free_listint2 - free the linked list
 * @head: the pointer to the first node
 * Description: sets the head to NULL
 */
void free_listint2(listint_t **head)
{
	if (*head && head)
	{
		free_listint2(&(*head)->next);
		free(*head);
		*head = NULL;
	}
}
