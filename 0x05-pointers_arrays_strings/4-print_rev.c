#include "main.h"
/**
 * print_rev - Prints a string in reverse
 * @s: String to be printed
 * Return: None
 */
void print_rev(char *s)
{
	int n = 0;

	while (s[n] != '\0')
	{
		n++;
	}
	for (n -= 1; n >= 0; n--)
	{
		_putchar(s[n]);
	}
	_putchar('\n');
}

