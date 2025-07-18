#include "main.h"

/**
 * _sqrt_helper - Helper function to find square root recursively
 * @n: Number to find the square root of
 * @i: Current guess
 *
 * Return: Natural square root or -1
 */
int _sqrt_helper(int n, int i)
{
	if (i * i == n)
		return (i);
	if (i * i > n)
		return (-1);

	return (_sqrt_helper(n, i + 1));
}

/**
 * _sqrt_recursion - Returns the natural square root of a number
 * @n: Number to find the square root of
 *
 * Return: Square root of n, or -1 if it doesn't have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt_helper(n, 0));
}
