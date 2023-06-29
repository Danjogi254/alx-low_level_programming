#include "main.h"
/**
 * _strncpy - Copies a string
 * @dest: input value
 * @src: input value2
 * @n: An integer
 * Return: Nothing
 */
char *_strncpy(char *dest, char *src, int n)
{
	int a;

	a = 0;
	while (a < n && src[a] != '\0')
	{
		dest[a] = src[a];
		a++;
	}
	while (a < n)
	{
		dest[a] = '\0';
		a++;
	}
	return (0);
}
