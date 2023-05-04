#include "main.h"

/**
 * get_endianness - checks if a machine s little or big endian
 * Return: zero for big & one for little
 * Made by Megatron
 */

int get_endianness(void)
{
	unsigned int cmp = 1;
	char *c = (char *) &cmp;

	return (*c);
}
