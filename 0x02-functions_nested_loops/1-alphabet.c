/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

void print_alphabet(void);

void print_alphabet(void)
{
		int x;

		for (x = 'a'; x <= 'z'; x++)
			putchar(x);

		putchar('\n');
}

