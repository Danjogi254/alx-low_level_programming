#include "main.h"
/**
 * rot13 - encodes a string using rot 13
 * @p: pointer
 * Return: p
 */
char *rot13(char *p)
{
	int a;
	int b;
	char alp1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char alp2[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (a = 0; p[a] != '\0'; a++)
	{
		for (b = 0; b < 52; b++)
		{
			if (p[a] == alp1[b])
			{
				p[a] = alp2[b];
				break;
			}
		}
	}
	return (p);
}
