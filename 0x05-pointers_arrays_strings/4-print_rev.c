#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string in reverse.
 */

void print_rev(char *s)
{
	 strrev(*s);

	printf("%s\n", *s);
}
