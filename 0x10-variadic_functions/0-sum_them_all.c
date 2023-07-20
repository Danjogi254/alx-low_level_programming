#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - sums all the parameters
 * @n: The number of parameters
 * @...: function to handle mmany arguments
 * Return: 0 if n == 0 otherwise, sumof all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list my_valist;
	unsigned int x, sum = 0;

	va_start(my_valist, n);

	for (x = 0; x < n; x++)
		sum += va_arg(my_valist, int);

	va_end(my_valist);

	return (sum);
}
