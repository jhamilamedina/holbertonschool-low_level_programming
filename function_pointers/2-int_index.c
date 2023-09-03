#include "function_pointers.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * int_index - function tha searches for an integer
 * @array: array
 * @size: the number of elements in the array
 * @cmp: pointers to the function of one of the 3 in main
 * Return: 0
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
			return (i);
	}
	return (-1);
}
