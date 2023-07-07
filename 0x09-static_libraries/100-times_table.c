#include "main.h"
/**
 * print_times_table - it  prints the n times table, starting with 0.
 * @n: value to be printed.
 */

void print_times_table(int n)

{

	int m, u, d;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar('0');

			for (u = 1; u <= n; u++)
			{
				_putchar(',');
				_putchar(' ');

				d = m * u;

				if (d <= 99)
					_putchar(' ');
				if (d <= 9)
					_putchar(' ');

				if (d >= 100)
				{
					_putchar((d / 100) + '0');
					_putchar(((d / 10)) % 10 + '0');
				}
				else if (d <= 99 && d >= 10)
				{
					_putchar((d / 10) + '0');
				}
				_putchar((d % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
