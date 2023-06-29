#include "main.h"
/**
 * reverse_array - Reverses the content of array of integers
 * @a: input values/ an array
 * @n: number of elements of the array
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int b;
	int c;

	for (b = 0; b < n--; b++)
	{
		c = a[b];
		a[b] = a[n];
		a[n] = c;
	}
}
