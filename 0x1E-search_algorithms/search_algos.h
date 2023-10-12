#ifndef __SEARCH_ALGOS_H__
#define __SEARCH_ALGOS_H__

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define __local __attribute__((weak))

/**
* struct listint_s - singly linked list
* @n: Integer.
* @index: Index of the node in the list
* @next: Pointer to the next node
* Made by MEGA
* Description: singly linked list node structure
* for ALX project
*/

typedef struct listint_s
{
	int n;
	size_t index;
	struct listint_s *next;
} listint_t;

/**
* struct skiplist_s - Singly linked list with an express lane
* @n: Integer
* @index: Index of the node in the list
* @next: Pointer to the next node
* @express: Pointer to the next node in the express lane
* Made by MEGA
* Description: singly linked list node structure with an express lane
* for Holberton project
*/

typedef struct skiplist_s
{
	int n;
	size_t index;
	struct skiplist_s *next;
	struct skiplist_s *express;
} skiplist_t;

/*Func*/

int linear_search(int *array, size_t size, int value);
int binary_search(int *array, size_t size, int value);
int jump_search(int *array, size_t size, int value);
int interpolation_search(int *array, size_t size, int value);
int exponential_search(int *array, size_t size, int value);
int advanced_binary(int *array, size_t size, int value);
listint_t *jump_list(listint_t *list, size_t size, int value);
skiplist_t *linear_skip(skiplist_t *list, int value);

/**
* print_array - prints an array
* @array: array to print
* @start: position to start printing
* @stop: position to stop
* Made by MEGA
*/

__local void print_array(int *array, int start, int stop)
{
	int i = start;

	for (; i < stop; ++i)
		printf("%d, ", array[i]);

	printf("%d\n", array[i]);
}

#endif
