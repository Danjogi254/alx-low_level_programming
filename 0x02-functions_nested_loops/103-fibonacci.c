#include <stdio.h>
/**
 * main - Entry point
 * Description: Prints sum of even fibonacci numbers upto 4000000
 * Return: Always 0 (success)
 */
int main(void)
{
	int a;
	long b = 1, c = 2, sum = c;

	while (b + c < 4000000)
	{
		c += b;
		if (c % 2 == 0)
			sum += c;
		b = c - b;
		++a;
	}
	printf("%ld\n", sum);
	return (0);
}
