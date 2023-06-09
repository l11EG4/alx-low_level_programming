#include "lists.h"

/**
* add_dnodeint - add a node
* @head: pointer to head
* @n: new node to add
* Made By MEGATRON
* Return: new
*/

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (!head)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*head)
		(*head)->prev = new;

	*head = new;

	return (new);
}
