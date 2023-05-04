#include "main.h"

/**
 * flip_bits - counts the num of bits to change
 * to get from 1 num to another
 * @n: 1st num
 * @m: 2sc num
 * Made by Megatron
 * Return: num of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int cmp, cnt = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (cmp = 63; cmp >= 0; cmp--)
	{
		current = exclusive >> cmp;
		if (current & 1)
			cnt++;
	}
	return (cnt);
}
