#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the pointer to the head
 * @n: integer value
 *
 * Return: the address of the new element, or NULL if it failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new;

	if (!head)
		return (NULL);
	if (*head)
		return (add_nodeint_end(&(*head)->next, n));
	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
