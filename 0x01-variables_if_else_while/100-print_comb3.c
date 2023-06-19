#include <stdio.h>
/**
 * main - Starting point
 * Description: 'prints all possible different combinations of two digits'
 * Return: Always 0 (success)
 */
int main(void)
{
	int A = 0;
	int B = 0;

	for (B = 0; B <= 9; B++)
	{
		for (A = 0; A <= 9; A++)
		{
			if (!((A == B) || (B > A)))
			{
				putchar('B');
				putchar('A');
				if (!(A == '9' && B == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
