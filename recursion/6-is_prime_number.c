#include "main.h"

/**
 * is_prime_helper - Checks if n is divisible by any number less than i
 * @n: The number to check
 * @i: Current divisor
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_helper(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);

	return (is_prime_helper(n, i + 1));
}

/**
 * is_prime_number - Returns 1 if n is a prime number, otherwise 0
 * @n: The number to check
 *
 * Return: 1 if prime, 0 if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (is_prime_helper(n, 2));
}
