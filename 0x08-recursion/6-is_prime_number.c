#include "main.h"
int check_prime(int n, int k);
/**
 * is_prime_number - Checking for prime numbers
 * @n: Input number
 * Return: 1 if prime number 0 if otherwise
 */
int is_prime_number(int n)
{
	return (check_prime(n, 1));
}
/**
 * check_prime - checking prime numbers
 * @n: input number
 * @k: iteration
 * Return: 1 for prime numbers or 0 otherwise
 */
int check_prime(int n, int k)
{
	if (n <= 1)
		return (0);
	if (n % k == 0 && k > 1)
		return (0);
	if ((n / k) < k)
		return (1);
	return (check_prime(n, k + 1));
}
