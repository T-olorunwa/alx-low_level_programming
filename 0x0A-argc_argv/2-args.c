#include <stdio.h>

/**
 * main - Prints all the argument passed into
 *	the program.
 * @argc: Counts argument
 * @argv:Points to an array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int i = 0;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}
