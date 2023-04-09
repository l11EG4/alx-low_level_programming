#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: variable
 * by kilimini
 *
 * Return: i
 */

int _strlen(char *s)
{
	int i = 0;

	if (!s)
	return (0);
	while (s[i])
	{
		i++;
	}
	return (i);
}
