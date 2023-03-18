#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;

	for (x = 'a' ; x <= 'z'; x++)
{
	int lower_x = x;
	putchar(lower_x);
}
	putchar('\n');
	for (x = 'A' ; x <= 'Z'; x++)
{
	int upper_x = x;
	putchar(upper_x);
}
	return (0);
}
