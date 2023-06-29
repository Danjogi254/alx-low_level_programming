#include "main.h"
/**
 * leet - encodes a string into 1337
 * @p: pointer
 * Return: p
 */
char *leet(char *p)
{
	int a, b;
	char c1[] = "aAeEoOtTlL";
	char c2[] = "4433007711";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; b < 10; b++)
		{
			if (p[a] == c1[b])
			{
				p[a] = c2[b];
			}
		}
	}
	return (p);
}
