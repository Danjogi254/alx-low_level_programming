#include "main.h"
/**
 * _strlen_recursion - Gives length of a string
 * @s: string
 * Return: actual length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compares characters in a string
 * @s: string
 * @a: iterator1
 * @b: iterator2
 * Return: 1 if palindrome 0 if not
 */
int comparator(char *s, int a, int b)
{
	if (*(s + a) == *(s + b))
	{
		if (a == b || a == b + 1)
			return (1);
		return (0 + comparator(s, a + 1, b - 1));
	}
	return (0);
}
/**
 * is_palindrome - is it a palindrome?
 * @s: string
 * Return: 1 if palindrome 0 if not
 */
int is_palindrome(char *s)
{
	if (*s == '\0')
		return (1);
	return (comparator(s, 0, _strlen_recursion(s) - 1));
}
