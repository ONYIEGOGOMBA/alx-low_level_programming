#include "main."
/**
 * print_line - it draws a straight line in the terminal.
 * @n: The number of _ characters to be printed.
 */

void print_line(int n)
{

	int line;

	if (n > 0)
	{

		for (line = o; line < n; line++)
			_putchar('_');
	}
	_putchar('\n');

}
