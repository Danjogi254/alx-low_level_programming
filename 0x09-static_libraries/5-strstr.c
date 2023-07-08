#include "main.h"
/**
 * _strstr - locates a substring
 * @haystack: a string
 * @needle: substring
 * Return: Pointer to beginning of the substring and NULL if not found
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *k = haystack;
		char *e = needle;
		
		while (*k == *e && *e != '\0')
		{
			k++;
			e++;
		}
		if (*e == '\0')
			return (haystack);
	}
	return (0);
}
