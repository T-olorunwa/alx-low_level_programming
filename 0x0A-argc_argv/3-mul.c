#include <stdlib.h>
#include <stdio.h>

/**
 * main - Prints the multiple of two arguments
 * @argc: Argument counter
 * @argv: Pointer to array of strings
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char *argv[])
{
	int num1 = atoi(argv[1]);
	int num2 = atoi(argv[2]);
	int result = num1 * num2;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	printf("%d\n", result);

	return (0);
}
