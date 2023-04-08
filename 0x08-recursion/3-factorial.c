#include "main.h"

/**
 * _factorial - Prints the factorial of a number
 * @n: The number which factorial is to be calculated
 * 
 * Return: -1 if n < 0
 */

int factorial(int n)
{

	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	else
		return  (n * factorial(n - 1));
}
