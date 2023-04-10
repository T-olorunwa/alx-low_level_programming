#include <stdio.h>

/**
 * main - Print number of argument.
 * args - Program prints number of argument
 *	passed into it
 * @argc: Argument count
 * @argv: Pointer to an array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc-1);

	return (0);
}
