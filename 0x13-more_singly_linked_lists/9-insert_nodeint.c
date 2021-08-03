#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 * @head: the pointer to the pointer to the node
 * @idx: the index of the list where the new node should be added starting at 0
 * @n: the integer value
 *
 * Return: the address of the new node, or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	if (*head && idx)
	{
		return (insert_nodeint_at_index(&(head)->next, idx - 1, n));
	}
	if (!idx)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	*head = new;

	return (new);
}
