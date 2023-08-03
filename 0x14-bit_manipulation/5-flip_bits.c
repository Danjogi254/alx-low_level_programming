#include "main.h"

/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int x, cnt = 0;
	unsigned long int flips;
	unsigned long int spilf = n ^ m;

	for (x = 63; x >= 0; x--)
	{
		flips = spilf >> x;
		if (flips & 1)
			cnt++;
	}

	return (cnt);
}
