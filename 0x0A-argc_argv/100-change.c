#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints the minimal number of coine to make change for amount of money
 * @argc: Argument counter
 * @argv: Argument vector
 * Return: 1 if the no of arg is not exactly one 0 otherwise
 */
int main(int argc, char *argv[])
{
	int cts, coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	cts = atoi(argv[1]);

	while (cts > 0)
	{
		coins++;
		if ((cts - 25) >= 0)
		{
			cts -= 25;
			continue;
		}
		if ((cts - 10) >= 0)
		{
			cts -= 10;
			continue;
		}
		if ((cts - 5) >= 0)
		{
			cts -= 5;
			continue;
		}
		if ((cts - 2) >= 0)
		{
			cts -= 2;
			continue;
		}
		cts--;
	}
	printf("%d\n", coins);

	return (0);
}
