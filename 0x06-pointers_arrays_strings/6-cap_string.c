#include "main.h"
/**
 * cap_string - Capitalizes all the words of a string
 * @str: pointer
 * Return: Capitalized string
 */
char *cap_string(char *str)
{
	int alp = 0;

	while (str[alp])
	{
		while (!(str[alp] >= 'a' && str[alp] <= 'z'))
			alp++;
		if (str[alp - 1] == ' ' ||
		str[alp - 1] == '\t' ||
		str[alp - 1] == '\n' ||
		str[alp - 1] == ',' ||
		str[alp - 1] == ';' ||
		str[alp - 1] == '.' ||
		str[alp - 1] == '!' ||
		str[alp - 1] == '?' ||
		str[alp - 1] == '"' ||
		str[alp - 1] == '(' ||
		str[alp - 1] == ')' ||
		str[alp - 1] == '{' ||
		str[alp - 1] == '}' ||
		alp == 0)
			str[alp] -= 32;
		alp++;
	}
	return (str);
}
