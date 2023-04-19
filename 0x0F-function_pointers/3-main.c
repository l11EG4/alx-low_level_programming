#include "function_pointers.h"
#include <stdlib.h>
#include "3-calc.h"
#include <stdio.h>

/**
 * main - Prints the result of simple operations.
 * @ac: the number of arguments
 * @av: array of arguments passed in the command line
 * by kilimini
 *
 * Return: Always 0.
 */

int main(int ac, char **av)
{
	int a, b;
	char *op;
	int (*operation)(int, int);

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	a = atoi(av[1]);
	op = av[2];
	if (op[1])
	{
		printf("Error\n");
		exit(99);
	}
	b = atoi(av[3]);
	operation = get_op_func(op);
	if (!operation)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", operation(a, b));
	return (0);
}
