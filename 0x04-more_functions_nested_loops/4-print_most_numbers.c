#include "main.h"

/**
 * print_numbers - prints numbers from 0 to 9, followed by a new line
 * do not print 2 and 4.
 */

void print_numbers(void)
{
	int num;

	for (num = 0; num <= 9; num++)
	{
		while (num != 2 && num != 4)
		_putchar(num + '0');
	}

	_putchar('\n');
}
