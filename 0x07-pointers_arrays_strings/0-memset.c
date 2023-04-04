#include "main.h"

/**
 * memset - fills memory with a constant byte
 * @n: the number of bytes to be filled
 * @s: pointer to memory
 * @b: constannt byte that fills memory
 *
 * Return: pointer to the memory area s.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;
	unsigned char *memory = s;
	unsigned char j = b;

	for (i = 0; i <= n; i++)
	{
		memory[i] = j;
	}

	return (memory);
}
