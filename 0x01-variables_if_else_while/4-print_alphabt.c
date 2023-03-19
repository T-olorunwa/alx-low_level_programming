#include <stdio.h>
/**
 * main - Entry Point
 * 
 * Return: Always 0 (Success)
 */

int main()
{
	char x;
	
	for (x = 'a'; x <= 'z'; x++)
{
	if (x != 'q' && x != 'e')
	putchar(x);
}
	putchar('\n');
	
	return 0;
}
