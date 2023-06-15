#ifndef __LISTS_H
#define __LISTS_H

#include <string.h>
#include <stdlib.h>
#include <stdio.h>

#define __silent __attribute__((__unused__))

/**
* struct dlistint_s - doubly linked list
* @n: integ
* @prev: points to prev node
* @next: points to next node
* Made by MEGATRON
* Description: doubly linked list node structure
*/

typedef struct dlistint_s
{
    int n;
    struct dlistint_s *prev;
    struct dlistint_s *next;
} dlistint_t;

/*  -------------------FUNCTIONS------------------- */

size_t print_dlistint(const dlistint_t *h);
size_t dlistint_len(const dlistint_t *h);
dlistint_t *add_dnodeint(dlistint_t **head, const int n);
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n);
void free_dlistint(dlistint_t *head);
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index);
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index);
int sum_dlistint(dlistint_t *head);
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n);

#endif
