#include "main.h"
/**
 * print_square - it prints a square, followed by a new line.
 *
 */

void print_square(int size)
{

	int heigt, width;

	if (size > 0)
	{
		for (heigt = 0; heigt < size; heigt++)
		{
			for (width = 0; width < size; width++)
				_putchar('#');

			if (heigt == size - 1)
				continue;
			_putchar('\n');
		}
	}

	_putchar('\n');
}
