#include "main.h"

/**
 * check_prime - helper to check if prime
 * @n: number
 * @i: iterator
 *
 * Return: 1 if prime, 0 if not
 */
int check_prime(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (check_prime(n, i - 1));
}

/**
 * is_prime_number - checks if an integer is a prime number
 * @n: number
 *
 * Return: 1 if prime, 0 otherwise
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (check_prime(n, n / 2));
}
