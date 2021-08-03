#include "lists.h"

/**
 * add_nodeint - adds a new node at the begining of a listint_t list
 * @head: the pointer to the head node
 * @n: integer value
 *
 * Return: the address of the nodes added
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = *head;
	*head = new;

	return (new);
}
