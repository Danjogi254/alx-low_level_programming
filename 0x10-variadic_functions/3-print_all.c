#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
* print_all - prints anything
* @format: list of arguments passed to the function
* ...: variadic function
* Return: Nothing
*/
void print_all(const char * const format, ...)
{
	int x = 0;
	char *str, *sep = "";

	va_list prt;

	va_start(prt, format);

	if (format)
	{
		while (format[x])
		{
			switch (format[x])
			{
				case 'c':
					printf("%s%c", sep, va_arg(prt, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(prt, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(prt, double));
					break;
				case 's':
					str = va_arg(prt, char *);
					if (!str)
						str = "(nil)";
					printf("%s%s", sep, str);
					break;
				default:
					x++;
					continue;
			}
			sep = ", ";
			x++;
		}
	}

	printf("\n");
	va_end(prt);
}

