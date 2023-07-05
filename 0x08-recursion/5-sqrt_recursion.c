#include "main.h"
int actual_sqrt_recursion(int n, int c);
/**
 * _sqrt_recursion - calculates the natural squareroot of a numbe
 * @n: The input number
 * Return: Natural number if have a squareroot or 1 if not
 */
int _sqrt_recursion(int n)
{
if (n < 0)
return (-1);
return (actual_sqrt_recursion(n, 0));
}
/**
 * actual_sqrt_recursion - finds the natural sqrt of a number
 * @n: Input number
 * @c: iterator
 * Return: Square root
 */
int actual_sqrt_recursion(int n, int c)
{
	if (c * c > n)
		return (-1);
	if (c * c == n)
		return (c);
	return (actual_sqrt_recursion(n, c + 1));
}
