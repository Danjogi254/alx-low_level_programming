#include "main.h"
/**
 * _strchr - locates a character in string
 * @s: the string
 * @c: first occurence of the character
 * Return: c if found, NULL if not
 */
char *_strchr(char *s, char c)
{
	int x;

	for (x = 0; s[x] >= '\0'; x++)
	{
		if (s[x] == c)
			return (&s[x]);
	}
	return (0);
}
