#include "main.h"
/**
 * times_table - it prints the 9 times table, starting with 0.
 *
 */

void times_table(void)

{
	int x, y;

	x = 0;
	while (x < 24)
	{
		y = 0;
		while (y < 60)
		{
			_putchar((x / 10) + '0');
			_putchar((x % 10) + '0');
			_putchar(':');
			_putchar((y / 10) + '0');
			_putchar((y % 10) + '0');
			_putchar('\n');
			y++;
		}
	}
	x++;


}
