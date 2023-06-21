#include "main.h"
/**
 * print_times_table - prints the n times table
 * @n: The value of the times table to be printed.
 * Return: no return
 */
void print_times_table(int n)
{
	int a, mult, product;

	if (n >= 0 && n <= 15)
	{
		for (a = 0; a <= n; a++)
		{
			_putchar('0');
			for (mult = 1; mult <= n; mult++)
			{
				_putchar(',');
				_putchar(' ');
				product = a * mult;
				if (product <= 99)
					_putchar(' ');
				if (product <= 9)
					_putchar(' ');
				if (product >= 100)
				{
					_putchar((product / 100) + '0');
					_putchar(((product / 10)) % 10 + '0');
				}
				else if (product <= 99 && product >= 10)
				{
					_putchar((product / 10) + '0');
				}
				_putchar((product % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
