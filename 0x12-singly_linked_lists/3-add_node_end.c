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
	list_t *new;
	list_t *temp = *head;
	unsigned int cmp = 0;

	while (str[cmp])
		cmp++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->cmp = cmp;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = new;

	return (new);
}
