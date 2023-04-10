#include <stdio.h>
#include <stdlib.h>

/**
 * main - Add and prints positive integer
 * @argc: Argument counter
 * @argv: Pointer to an array of strings
 *
 * Return: zero (0), if no number is passed
 *	one (1) and print "Error" if number contains symbols
 */

int main(int argc, char *argv[])
{
	int i, j, add = 0;

	if (argc == 1)
		printf("0\n");

	for (j = 1; j <= argc; j++)
	{
		for (i = 0; i <= 9; i++)
		{
			if(argc != i)
			{
				printf("Error\n");
				return (1);
			}
		}
		add += atoi(argv[j]);
	}
	printf("%d\n", add);

	return (0);
}
