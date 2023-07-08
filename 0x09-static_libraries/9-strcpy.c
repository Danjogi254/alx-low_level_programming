#include "main.h"
/**
 * *_strcpy - Copies the string pointed to src
 * @dest: Destination value
 * @src: Source value
 * Return: Pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x++] = '\0';
	return (dest);
}
