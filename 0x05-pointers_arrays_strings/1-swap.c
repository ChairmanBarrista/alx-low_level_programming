#include "main.h"

/**
 * swap_int - function that swaps the values of two integers.
 * @a: Integer to swap
 * @b: Integer to swap
 */

void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}
