#include "main.h"
#include <stddef.h>

/**
 * _strpbrk - a fucntion
 * @s: variable
 * @accept: variable
 * by kilimini
 * Return: pointer to the byte matched
 */

char *_strpbrk(char *s, char *accept)
{
	int j;

	while (*s != '\0')
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (*s == accept[j])
				return (s);
		}
		s++;
	}

	return (NULL);
}
