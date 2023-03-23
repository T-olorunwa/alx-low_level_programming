include "main.h"

/**
 * _isupper - checks if a character is uppercase.
 * @c: The character to be checked.
 *
 * Return: 1 if character is uppercase, 0 if otherwise.
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'z')
		return (1);
	else 
		return (0);
}
