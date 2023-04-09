#include "main.h"
#include <unistd.h>

/**
 * _puts -  a string
 * @str: variable
 * by kilimini
 *
 * Return: Always 0 (Success)
 */

void _puts(char *str)
{
	int i = 0;

	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
	_putchar('\n');
}
