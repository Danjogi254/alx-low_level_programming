#include "main.h"
/**
 * _atoi - Converts string to an integer
 * @s: String to br converted
 * Return: An integer
 */
int _atoi(char *s)
{
	int a= 0;
	unsigned int b = 0;
	int c = 1;
	int d = 0;

	while (s[a])
	{
		if (s[a] == 45)
		{
			c *= -1;
		}
		while (s[a] >= 48 && s[a] <= 57)
		{
			d = 1;
			b = (b * 10) + (s[a] - '0');
			a++;
		}
		if (d == 1)
		{
			break;
		}
		a++;
	}
	b *= c;
	return (b);
}
