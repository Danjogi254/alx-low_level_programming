#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_strings - Prints strings, followed by a new line
 * @separator: A string to be printed between strings
 * @n: The number of strings passed to the function
 * @...: A variable number of strings to be printed
 * Description: Dont print if seprtr is NULL, print nil if one of strs is NULL
 * Return: Nothing
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strs;
	char *str;
	unsigned int x;

	va_start(strs, n);

	for (x = 0; x < n; x++)
	{
		str = va_arg(strs, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (x != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");

	va_end(strs);
}
