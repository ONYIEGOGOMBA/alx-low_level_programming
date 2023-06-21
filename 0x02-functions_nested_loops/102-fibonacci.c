#include <stdio.h>
/**
 * main - it  prints the first 50 Fibonacci numbers,
 * starting with 1 and 2, followed by a new line.
 *
 * Return: Always 0
 *
 */

int main(void)
{

	long int i, j ,k, l;

	j = 1;

	k = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)

		{
			printf("%ld, ", j);
		}
		else
		{
			printf("%ld\n", j);
		}
		l = j + k;
		j = k;
		k = l;

	}
	return (0);
}
