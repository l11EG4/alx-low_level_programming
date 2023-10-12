#include "search_algos.h"

/**
* binary_search - Binary search algorith
* @array: An array of integers
* @size: size of the array/list
* @value: value to find
* Made by ZAKARIA
* Return: index of the element in the array or -one
*/

int binary_search(int *array, size_t size, int value)
{
	size_t a, start, stop;

	if (!size)
		goto KILL;

	stop = size - 1;
	a = stop / 2;
	start = 0;

	for (; start <= stop;)
	{
		printf("Searching in array: ");
		print_array(array, start, stop);
		if (value == array[a])
			return (a);
		else if (value < array[a])
			stop = a - 1;
		else
			start = a + 1;
		a = (stop - start) / 2;
		a += start;
	}
KILL:	return (-1);
}
