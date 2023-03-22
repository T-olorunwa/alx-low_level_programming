/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

void print_alphabet(void)
{
	char x;

	for (x = 'a'; x <= 'z'; x++)
	{
		putchar(x);
	}
	putchar('\n');
}

