#include "main.h"

/**
 * binary_to_uint - cnvrts a binary num to unsigned int
 * @b: string containing the binary number
 * Made by Megatron
 * Return: the converted num
 */

unsigned int binary_to_uint(const char *b)
{
	int cmp;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (cmp = 0; b[cmp]; cmp++)
	{
		if (b[cmp] < '0' || b[cmp] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[cmp] - '0');
	}

	return (dec_val);
}
