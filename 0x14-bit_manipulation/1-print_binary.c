#include "main.h"

/**
 * print_binary - prints the binar equal of a dec num
 * @n: number to print in binary
 * Made by Megatron
 */

void print_binary(unsigned long int n)
{
	int cmp, cnt = 0;
	unsigned long int current;

	for (cmp = 63; cmp >= 0; cmp--)
	{
		current = n >> cmp;

		if (current & 1)
		{
			_putchar('1');
			cnt++;
		}
		else if (cnt)
			_putchar('0');
	}
	if (!cnt)
		_putchar('0');
}
