#include "main.h"

/**
 * swap_int - Swaps the values of 2 integers.
 * @a: integer to swap.
 * @b: integer to swap.
 *
 * Return:void.
 */

void swap_int(int *a, int *b)
{
	int p;

	p = *a;
	*a = *b;
	*b = p;

}
