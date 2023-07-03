#include "main.h"
/**
 * _memset - Fills the first n bytes to the memory
 * @s: pointed memory area
 * @b: constant bytes
 * @n: no of bytes
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		s[x] = b;
	return (s);
}
