#include "main.h"

/**
 * clear_bit - setting the value of a given bit to 0
 * @n: poins the number to be changed
 * @index: index of the bit need to be cleared
 *
 * Return: 1 for success, -1 for otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
