#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@array: array
 *@size: size of elements in an array
 *@cmp: pointer to a function
 *Return: 0
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (x = 0; x < size; x++)
	{
		if (cmp(array[x]))
			return (x);
	}
	return (-1);
}
