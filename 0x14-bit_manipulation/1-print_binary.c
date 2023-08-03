#include "main.h"

/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int num, arr = 0;
	unsigned long int c;

	for (num = 63; num >= 0; num--)
	{
		c = n >> num;

		if (c & 1)
		{
			_putchar('1');
			arr++;
		}
		else if (arr)
			_putchar('0');
	}
	if (!arr)
		_putchar('0');
}
