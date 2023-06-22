#include "main.h"
/**
 * print_triangle - it  prints a triangle, followed by a new line.
 *
 */

void print_triangle(int size)
{
	int hash, tri;

	if (size > 0)
	{
		for (hash = 1; hash <= size; hash++)
		{
			for (index = size - hash; tri > 0; tri--)
				_putchar(' ');

			for (tri = 0; tri < hash; tri++)
				_putchar('#');

			if (hash == size)
				continue;

			_putchar('\n');
		}
	}

	_putchar('\n');
}
