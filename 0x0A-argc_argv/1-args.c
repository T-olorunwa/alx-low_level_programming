#include <stdio.h>

/**
 * args - program prints number of argument
 *	passed into it
 * @argc: Argument count
 * @argv: Pointer to an array of strings
 *
 * Return: Number of argument passed
 */

int main(int argc, __attribute__((__unused__)) char *argv[])
{
	printf("%d\n", argc);

	return (0);
}
