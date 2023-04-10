#include <stdio.h>

/**
 * main - Prints the number of arguments passed
 * @argc: Argument count
 * @argv: Pointer to an array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc-1);

	return (0);
}
