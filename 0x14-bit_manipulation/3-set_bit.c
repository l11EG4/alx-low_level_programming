#include "main.h"

/**
 * set_bit - sets a bit at a given index to one
 * @n: pointer to the num to change
 * @index: index of the bit to set to one
 * Made by Megatron
 * Return: one for success, minus one for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = ((1UL << index) | *n);
	return (1);
}
