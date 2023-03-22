#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabet 10x
 */

void print_alphabet_x10(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{	while (x <= 10)
		putchar(x);
			x++;
	}
	putchar('\n');
}
