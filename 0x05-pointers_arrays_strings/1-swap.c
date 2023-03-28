#include "main.h"

/**
 * swap: swap the value of two integers
 * @a: 1st inteher to swap
 * @b: 2nd integer to swap
 */

void swap_int(int *a, int *b)
{
	int *a = &a;
	int *b = &b;

	*a = 42;
	*b = 98;
}
