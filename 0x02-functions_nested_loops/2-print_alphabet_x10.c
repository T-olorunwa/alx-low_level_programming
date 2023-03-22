#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 */

void print_alphabet_x10(void)
{
	int x;
	int count = 0;

	while (count++ <= 9)
	{
	for (x = 'a'; x <= 'z'; x++)		
		_putchar(x);
	_putchar('\n');
	}
}
