#include "main.h"
#include <stddef.h>

/**
 * _strchr - Entry point
 * @s: input
 * @c: input
 * by kilimi
 *
 * Return: Always 0 (Success)
 */

char *_strchr(char *s, char c)
{
	int i;

	while (1)
	{
		i = *s++;

		if (i == c)
			return (s - 1);

		if (i == 0)
			return (NULL);
	}
}
