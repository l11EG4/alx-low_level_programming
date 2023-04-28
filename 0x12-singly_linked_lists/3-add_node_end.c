#include "lists.h"

/**
 * add_node_end - adds a new node at the end of a list
 * @head: double pointer to the list_t list
 * @str: string to put in the new node
 * made by Megatron
 * Return: address of the new element, or NULL failes
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *cmp;

	if (!str)
		return (NULL);
	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);
	new->str = strdup(str);
	if (!(new->str))
	{
		free(new);
		return (NULL);
	}
	new->len = strlen(new->str);
	new->next = NULL;
	if (!*head)
	{
		*head = new;
		return (new);
	}
	cmp = *head;
	while (cmp->next)
		cmp = cmp->next;
	cmp->next = new;
	return (new);
}
