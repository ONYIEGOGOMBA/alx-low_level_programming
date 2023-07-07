#include <stdio.h>
/**
 * main - omputes and prints the sum of all the multiples
 * of 3 or 5 below 1024 (excluded), followed by a new line.
 *
 * Return: Always 0
 *
 */
int main(void)
{

	int x, sum = 0;

	for (x = 0; x < 1024; x++)
	{

		if ((x % 3) == 0 || (x % 5) == 0)
			sum += x;

	}

	printf("%d\n", sum);

	return (0);
}
