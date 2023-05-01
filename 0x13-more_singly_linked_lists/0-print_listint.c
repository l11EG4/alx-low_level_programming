#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list.
 * @h: parameter
 * Made by Mega
 * Return: results
 */

size_t print_listint(const listint_t *h)
{
	int n = 0;

	while (h)
	{
		printf("%d\n", h->n);
		n++;
		h = h->next;
	}
	return (n);
}
