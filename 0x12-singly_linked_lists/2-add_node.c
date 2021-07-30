#include "lists.h"

/**
 * _strlen - calculate the lenght of a string
 * @str: a pointer to the string given
 *
 * Return: the lenght of the string
 */
size_t _strlen(const char *str)
{
	const char *tmp = str;

	if (str != NULL)
	{
		while (*tmp)
			++tmp;
	}
	return (tmp - str);
}

/**
 * _strdup - create a new array containing a copy of the given string
 * @str: a pointer to the string to copy
 *
 * Return: If str is NULL or if memory allocation fails, return NULL.
 * Otherwise a return a pointer to the new copy
 */
char *_strdup(const char *str)
{
	char *dup = NULL;
	size_t size = 0;

	if (!str)
		return (NULL);

	while (str[size++])
		;

	dup = malloc(sizeof(char) * size);
	if (!dup)
		return (NULL);

	while (size--)
		dup[size] = str[size];

	return (dup);
}

/**
 * add_node - adds a new node at the beginning of a list_t list
 * @head: a pointer to the head of the list
 * @str: the string of the node to add
 *
 * Return: the address of the new element, or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = NULL;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = _strdup(str);
	new->len = _strlen(str);
	new->next = *head;
	*head = new;

	return (new);


}
