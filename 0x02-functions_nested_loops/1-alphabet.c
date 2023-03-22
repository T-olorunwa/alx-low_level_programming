#include <main.h>
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

int main(void)
{
	char x;
	
	void print_alphabet(void)
{
		int x;
		for (x = 'a'; x <= 'z'; x++)
			putchar(x);
		return print_alphabet();
}
	return (0);
}
