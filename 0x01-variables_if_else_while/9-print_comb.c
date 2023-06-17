#include <stdio.h>
/**
 * main - it prints all possible combinations of single-digit numbers.
 *
 * Return: Always 0
 *
 */

int main(void)

{

	int x;

	for (x = 48; x < 58; x++)

	{

		putchar((x % 10) + '0');

	if (x == 58)

	continue;

		putchar(',');

		putchar(' ');

	}

	putchar('\n');

	return (0);

}
