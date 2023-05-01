#include "lists.h"

/**
 * free_listint - frees a listint_t list.
 * @head: parameter
 * Made by Mega
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *lst;

	while (head)
	{
		lst = head;
		head = head->next;
		free(lst);
	}
}
