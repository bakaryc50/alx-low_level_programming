#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: a pointer to the elements list_t
 *
 * Return: the number of elements
 */
size_t list_len(const list_t *h)
{
	if (h != NULL)
	{
		return (list_len(h->next) + 1);
	}

	return (0);
}
