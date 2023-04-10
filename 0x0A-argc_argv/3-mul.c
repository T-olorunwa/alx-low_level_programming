#inlude <stdlib.h>
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
	int num1 = argv[1];
	int num2 = argv[2];
	int result = num1 * num2;

	if (argc <= 2)
		printf("Error");
	else if (argc == 3)
		printf("%d", result);

	return (0);
}
