#include <stdio.h>
/**
 * main - Entry Point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int x;
	int a;

	for (a = '0'; a <= '9'; a++)
	putchar(a);
	for (x = 'a'; x <= 'f'; x++)
	putchar(x);

	putchar('\n');

	return (0);
}
