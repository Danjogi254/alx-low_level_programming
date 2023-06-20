#include "main.h"
/**
 * print_sign - Prints a sign of a number
 * @n: The number
 * Return: 1 if greater than zero. 0 if is zero. -1 if less than zero
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
	_putchar(45);
	return (-1);
}
else
{
	_putchar(48);
	return (0);
}
_putchar('\n');
}
