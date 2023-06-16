#include <stdio.h>
/**
 * main - it prints all the numbers of base 16 in lowercase,
 * followed by a new line.
 *
 * Return: Always 0
 *
 */

int main(void)

{

	int x;

	char bas;

	for (x = 48; x < 58; x++)
	{

		putchar(x);
	}

	for (bas = 'a'; bas <= 'f'; bas++)

	{

		putchar(bas);

	}

	putchar('\n');
	return (0);
}
