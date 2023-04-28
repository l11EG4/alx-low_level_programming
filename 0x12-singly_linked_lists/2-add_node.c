#include "lists.h"
#include <stdlib.h>
#include <string.h>

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * made by Megatron
 * Return: the address of the new element, or NULL if fails
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int cmp = 0;

	while (str[cmp])
		cmp++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->cmp = cmp;
	new->next = (*head);
	(*head) = new;

	return (*head);
}
