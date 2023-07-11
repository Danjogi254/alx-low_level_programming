#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * argstostr - concatenates all the arguments of a program
 * @ac: argument counter
 * @av: argument vector
 * Return: NULL if it fails or a pointer to a new string
 */
char *argstostr(int ac, char **av)
{
	int a = 0;
	int b = 0;
	int c = 0;
	int d = 0;
	char *s;

	if (ac == 0 || av == NULL)
		return (NULL);
	while (b < ac)
	{
		while (av[b][c])
		{
			a++;
			c++;
		}
		c = 0;
		b++;
	}

	s = malloc((sizeof(char) * a) + ac + 1);

	b = 0;
	while (av[b])
	{
		while (av[b][c])
		{
			s[d] = av[b][c];
			d++;
			c++;
		}
		s[d] = '\n';
		c = 0;
		d++;
		b++;
	}
	d++;
	s[d] = '\0';
	return (s);
}
