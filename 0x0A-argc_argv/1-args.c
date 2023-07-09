#include "main.h"
#include <stdio.h>

/**
 * main - Prints the number of arguments
 * @argc: argument counts
 * @argv: arguments vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}
