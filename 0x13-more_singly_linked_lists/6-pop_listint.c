#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: the pointer to the pointer to the first node
 *
 * Return: the head node's data, or 0 if linked list empty
 */
int pop_listint(listint_t **head)
{
	int data_save;
	listint_t *oldnode;

	if (!(head && *head))
		return (0);
	data_save = (*head)->n;
	oldnode = *head;
	*head = oldnode->next;
	free(oldnode);

	return (data_save);
}
