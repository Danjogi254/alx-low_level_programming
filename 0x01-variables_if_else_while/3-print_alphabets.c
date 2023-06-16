#include <stdio.h>
/**
 * main - Starting point
 * Description: 'Upper and lower cases'
 * Return: Always 0 (Success)
 */
int main(void)
{
int n = 97;
int x = 65;

while (n <= 122)
{
putchar(n);
n++;
}
while (x <= 98)
{
putchar(x);
x++;
}
putchar('\n');
return (0);
}
