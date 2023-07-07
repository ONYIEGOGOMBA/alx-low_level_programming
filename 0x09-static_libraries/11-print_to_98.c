#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - it prints all natural numbers from n to 98,
 * followed by a new line.
 *
 * @n: The beginning number
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
