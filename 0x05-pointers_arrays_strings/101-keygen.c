#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - generates random varied passwords
 * Return: Always 0
 */
int main(void)
{
	char pw[84];
	int x = 0, add = 0, diff1, diff2;

	srand(time(0));

	while (add < 2772)
	{
		pw[x] = 33 + rand() % 94;
		add += pw[x++];
	}
	pw[x] = '\0';
	if (add != 2772)
	{
		diff1 = (add - 2772) / 2;
		diff2 = (add - 2772) / 2;
		if ((add - 2772) % 2 != 0)
		diff1++;
		for (x = 0; pw[x]; x++)
		{
			if (pw[x] >= (33 + diff1))
			{
				pw[x] -= diff1;
				break;
			}
		}
		for (x = 0; pw[x]; x++)
		{
			if (pw[x] >= (33 + diff2))
			{
				pw[x] -= diff2;
				break;
			}
		}
	}
	printf("%s", pw);
	return (0);
}
