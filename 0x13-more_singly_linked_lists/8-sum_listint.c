#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n) of a listint_t
 * @head: the pointer to the node
 *
 * Return: the sum, or 0 if empty list
 */
int sum_listint(listint_t *head)
{
	if (head)
		return (head->n + sum_listint(head->next));
	else
		return (0);
}
