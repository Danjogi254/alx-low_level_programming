#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * main - Prints multiplication of two arguments
 * @argc: Arguments counts
 * @argv: Arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int no1 = 0;
	int no2 = 0;

	if (argc == 3)
	{
		no1 = atoi(argv[1]);
		no2 = atoi(argv[2]);
		printf("%d\n", no1 * no2);
		return (0);
	}
	else
	{
		printf("ERROR\n");
		return (1);
	}
	return (0);
}

