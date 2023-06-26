#include "main.h"

/**
 * swap_int - Swaps the value of two digits
 * @a: The first digit
 * @b: The second digit
 * Return: None
 */
void swap_int(int *a, int *b)
{
	int num = *a;
	*a = *b;
	*b = num;
}
