#include "lists.h"

/**
 * get_nodeint_at_index - returns the node of a listint_t linked list
 * @head: the pointer to the node
 * @index: the index of the node starting at 0
 *
 * Return: the node, or NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	if (head && index)
	{
		return (get_nodeint_at_index(head->next, index - 1));
	}
	return (head);
}
