#include <stdarg.h>
#include "variadic_functions.h"
#include <stdio.h>
/**
 * print_numbers - Prints numbers followed by a new line
 * @separator: string printed between numbers
 * @n: number of integers passed to the function
 * ...: variable number of numbers to be printed
 * Return: Nothing
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nu;
	unsigned int x;

	va_start(nu, n);

	for (x = 0; x < n; x++)
	{
		printf("%d", va_arg(nu, int));

		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(nu);
}
