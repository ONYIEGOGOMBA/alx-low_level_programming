#include "main.h"
/**
 * times_table - it prints the 9 times table, starting with 0.
 *
 */

void times_table(void)

{
	int m, u, d;

	for (m = 0; m <= 9; m++)
	{
		_putchar('0');

		for (u = 1; u <= 9; u++)
		{
			_putchar(',');
			_putchar(' ');

			prod = m * u;

			if (d <= 9)
				_putchar(' ');
			else
				_putchar((d / 10) + '0');

			_putchar((d % 10) + '0');
		}
		_putchar('\n');
	}
}
