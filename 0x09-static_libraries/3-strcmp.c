#include "main.h"

/**
 * _strcmp - compare string values
 * @s1: input value
 * @s2: input value
 * by kilimini
 *
 * Return: void return nothing
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 == *s2)
	{
		if (*s1 == '\0')
			return (0);
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
