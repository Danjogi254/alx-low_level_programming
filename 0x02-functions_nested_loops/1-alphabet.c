#include "main.h"
/**
 * main - Entry point
 * Description: 'Printing ten times the alphabet'
 * Return: Always 0 (Success)
 */
void print_alphabet(void)
{
	int i;

	for (i = 97; i <= 122; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
	return (0);
}
