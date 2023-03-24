#include "main.h"
/**
* more_numbers - prints 10X the number from 1-14.
*/
void more_numbers(void)
{
	int x, j;
	for (x = 0; x <= 14; x ++)
	{
		j = 0;
		while (j <= 10)
		{
			_putchar((j % 10) + '0');
			j++
		}
		_putchar((x % 10) + '0');
	}
	_putchar('\n');
}
