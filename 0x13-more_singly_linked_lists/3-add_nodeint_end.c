#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: parameter
 * @n: parameter
 * Made by Megatron
 * Return: results
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *cmp;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
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
