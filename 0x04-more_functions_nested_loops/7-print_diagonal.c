#include "main.h"
/**
 * print_diagonal - it draws a diagonal line on the terminal.
 * @n: The number of \ characters to be printed.
 */

void print_diagonal(int n)
{

	int len, line;

	if (n > 0)
	{
		for (len = 0; len < n; len++)
		{
			for (line = 0; line < len; line++)
				_putchar(' ');
			_putchar('\\');

			if (len == n - 1)
				continue;
			_putchar('\n');
		}

	}
	_putchar('\n');

}
