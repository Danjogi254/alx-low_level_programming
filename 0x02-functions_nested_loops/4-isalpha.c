#include "main.h"
/**
 * _isalpha - Checks alphabetical character
 * @c: 'A letter lowercase ofr uppercase'
 * Return: 1 if it is a leter. 0 otherwise.
 */
int _isalpha(int c)
{
if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
{
return (1);
}
else
{
	return (0);
}
_putchar('\n');
}
