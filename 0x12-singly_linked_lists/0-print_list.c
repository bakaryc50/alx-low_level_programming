#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: a pointer to the elements list_t
 * if str is NULL , print [0] (nil)
 *
 * Return: the number of nodes
 */
size_t print_list(const list_t *h)
{
	if (h != NULL)
	{
		if (h->str != NULL)
			printf("[%d] %s\n", h->len, h->str);
		else
			printf("[0] (nil)\n");

		return (print_list(h->next) + 1);
	}

	return (0);
}
