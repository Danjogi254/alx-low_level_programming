#include "main.h"
#include <stdio.h>
/**
 * print_buffer - Prints a buffer
 * @b: Pointed buffer
 * @size: size
 * Return: void
 */
void print_buffer(char *b, int size)
{
	int a, c, d;

	a = 0;

	if (size <= 0)
	{
		printf("\n");
		return;
	}
	while (a < size)
	{
		c = size - a < 10 ? size - a : 10;
		printf("%08x:", a);
		for (d = 0; d < 10; d++)
		{
			if (d < c)
			{
				int decimal = *(b + a + d);
				printf("%02x %03d", decimal, decimal);
			}
			else
				printf(" ");
			if (d % 2)
			{
				printf(" ");
			}
		}
		for (d = 0; d < c; d++)
		{
			int e = *(b + a + d);

			if (e < 32 || e > 132)
			{
				e = '.';
			}
			printf("%c", e);
		}
		printf("\n");
		a += 10;
	}
}
