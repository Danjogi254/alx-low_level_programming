#include <stdio.h>
#include <math.h>
/**
 * main - Prints largest prime factor of a number
 * Return: 0 (success)
 */
int main(void)
{
	long a, b;
	long number = 612852475143;
	double square = sqrt (number);

	for (a = 1; a <= square; a++)
	{
		if (number % a == 0)
		{
			b = number / a;
		}
	}
	printf("%ld\n", b);
	return (0);
}
