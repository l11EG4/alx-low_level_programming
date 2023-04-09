#include "main.h"
#include <stdio.h>

/**
 * _isupper - uppercase letters
 * @c: char to check
 * by kilimi
 *
 * Return: 0 or 1
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	return (0);
}
