#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Prints natural numbers
 * @n: The number to start printing from.
 * Return: Always 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d. ", n--);
		printf("%d, ", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
