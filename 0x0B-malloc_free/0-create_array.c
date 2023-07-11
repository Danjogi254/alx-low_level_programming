#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of characters
 * @size: The size of the array
 * @c: A character
 * Return: NuLL if size = 0, Apointer to the array if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int a;
	char *b;

	if (size == 0)
		return (NULL);

	b = malloc(size * sizeof(char));

	if (b == NULL)
		return (NULL);

	for (a = 0; a < size; a++)
	{
		b[a] = c;
	}
	return (b);
}
