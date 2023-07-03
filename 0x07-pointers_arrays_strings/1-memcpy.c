#include "main.h"
/**
 * _memcpy - copies n bytes from memory area
 * @dest: destination of the copied bytes
 * @src: memory area to be copied
 * @n: no of bytes to be copied
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
