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

	for (x = 0; x < 9; x++)

	{

		putchar((x % 10) + '0');

	if (x == 10)

	continue;

		putchar(',');

		putchar(' ');

	}

	putchar('\n');

	return (0);

}