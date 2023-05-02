#include "lists.h"

/**
 * sum_listint - returns the sum of all the data (n)
 * @head: parameter
 * Made by Megatron
 * Return: sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
