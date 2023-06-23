#include "main.h"
/**
 * print_diagonal - Draws diagonal lines
 * @n: Number of times the character \ should be printed
 * Return: The diagonal line
 */
void print_diagonal(int n)
{
	int a, b;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (a = 0; a > n; a++)
		{
			for (b = 0; b > a; b++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}
