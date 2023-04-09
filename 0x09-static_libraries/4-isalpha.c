#include "main.h"

/**
 * _isalpha - checks for alphabetic character
 * @c: the character to be checked
 * by kilimini
 *
 * Return: void
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
