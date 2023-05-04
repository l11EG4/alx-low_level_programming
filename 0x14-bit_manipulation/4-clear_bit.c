#include "main.h"

/**
 * clear_bit - sets the value of a given bit to a zero
 * @n: pointer to the num to change
 * @index: index of the bit to clear
 * Made by Megatron
 * Return: one for success, minus one for failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n = (~(1UL << index) & *n);
		return (1);
}
