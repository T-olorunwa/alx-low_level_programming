#include "main.h"
#include <math.h>

/**
 * _sqrt_recursion - Function that finds the square
 *			root of an integer
 * @n: The number with ehich we are finding it sqrt.
 */

int _sqrt_recursion(int n)
{
	int squareRoot = sqrt(n);

	if ((sqrt(n) / squareRoot) != 1)
		return (-1);

	return (squareRoot);
}
