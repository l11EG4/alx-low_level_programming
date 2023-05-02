#include "lists.h"

/**
* *reverse_listint - reverse a list
* @head: pointer
* Made by Megatron
* Return: reversed list
*/

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prv = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prv;
		prv = *head;
		*head = next;
	}
	*head = prv;
	return (*head);
}
