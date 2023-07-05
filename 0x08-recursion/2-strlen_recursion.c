#include "main.h"
/**
 * _strlen_recursion - Return the length of a string
 * @s: The string
 * Return: The length
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	s++;
	return (_strlen_recursion(s) + 1);
}
