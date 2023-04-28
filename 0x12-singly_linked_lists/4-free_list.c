#include "lists.h"

/**
 * free_list - frees a list
 * @head: list_t list to be free
 * made by Megatron
 */

void free_list(list_t *head)
{
	list_t *temp;

	while (head)
	{
		temp = head->next;
		free(head->str);
		free(head);
		head = temp;
	}
}
