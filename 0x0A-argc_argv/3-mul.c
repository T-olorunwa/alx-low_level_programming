#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the multiple of two arguments
 * @argc: Argument counter
 * @argv: Pointer to array of strings
 *
 * Return: Zero (0), if the program receives two arguments
 *	one (1), if the program receives less than 2 arguments
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}
