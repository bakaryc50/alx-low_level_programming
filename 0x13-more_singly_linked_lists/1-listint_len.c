#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: the pointer to the linked list
 *
 * Return: the number of nodes
 */
size_t listint_len(const listint_t *h)
{
	if (h != NULL)
		return (listint_len(h->next) + 1);
	else
		return (0);
}
