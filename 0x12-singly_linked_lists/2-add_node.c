#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 * made by Megatron
 * Return: the address of the new element, or NULL
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *lst;

	lst = malloc(sizeof(list_t));
	if (!lst)
		return (NULL);
	lst->str = strdup(str);
	lst->len = strlen(str);
	lst->next = *head;
	*head = lst;
	return (lst);
}
