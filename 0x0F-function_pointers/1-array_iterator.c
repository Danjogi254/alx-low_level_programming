#include <stdio.h>
#include "function_pointers.h"
/**
 * array_iterator - executes a func given as a param on each element of array
 * @array: array
 * @size: size of the array
 * @action: pointer to the function
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (array == NULL || action == NULL)
		return;

	for (x = 0; x < size; x++)
	{
		action(array[x]);
	}
}
