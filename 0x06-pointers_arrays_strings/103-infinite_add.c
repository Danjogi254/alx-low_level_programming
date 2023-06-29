#include "main.h"
/**
 * rev_string - reversing an array
 * @n: integer parameters
 * Return: 0
 */
void rev_string(char *n)
{
	int a = 0;
	int b = 0;
	char sud;

	while (*(n + a) != '\0')
	{
		a++;
	}
	a--;

	for (b = 0; b < a; b++, a--)
	{
		sud = *(n + b);
		*(n + b) = *(n + a);
		*(n + a) = sud;
	}
}
/**
 * infinite_add - Adds two numbers
 * @n1: The first number
 * @n2: The second number
 * @r: Buffer where the results will be stored
 * @size_r: Buffer size
 * Return: 0
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int a = 0, b = 0, c = 0, d = 0;
	int j = 0, k = 0, m = 0;

	while (*(n1 + b) != '\0')
		b++;
	while (*(n2 + c) != '\0')
		c++;
	b--;
	c--;
	if (c >= size_r || b >= size_r)
		return (0);
	while (c >= 0 || b >= 0 || a == 1)
	{
		if (b < 0)
			j = 0;
		else
			j = *(n1 + b) - '0';
		if (c < 0)
			k = 0;
		else
			k = *(n2 + c) - '0';
		m = j + k + a;
		if (m >= 10)
			a = 1;
		else
			a = 0;
		if (d >= (size_r - 1))
			return (0);
		*(r + d) = (m % 10) + '0';
		d++;
		c--;
		b--;
	}
	if (d == size_r)
		return (0);
	*(r + d) = '\0';
	rev_string(r);
	return (r);
}
