#include "main.h"
#include <math.h>
/**
 * _pow_recursion - a function that raises an integer 
 * 		to another integer
 * @x: The base of the equation
 * @y: The power of the equation
 *
 * Return: the value of x raised to the power of y
 */

int _pow_recursion(int x, int y)
{
	int res = (int)pow(x, y);

	if (y < 0)
		return (-1);
	else
		return (res);
}
