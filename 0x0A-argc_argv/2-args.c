#include "main.h"
#include <stdio.h>
/**
 * main - Prints all the content in an argument
 * @argc: argument count
 * @argv: argument vector
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int all;

	for (all = 0; all < argc; all++)
	{
		printf("%s\n", argv[all]);
	}
	return (0);
}
