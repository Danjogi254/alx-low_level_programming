#include "main.h"
/**
 * print_most_numbers - Prints 0 to 9 but jumping 2 and 4
 * Return: 0 to 9 but jumping two and four
 */
void print_most_numbers(void)
{
	int a = 0;

	for (; a <= 9; a++)
	{
		if (a == 2 || a == 4)
		{
			continue;
		}
		else
		{
			_putchar(a + '0');
		}
	}
	_putchar('\n');
}
