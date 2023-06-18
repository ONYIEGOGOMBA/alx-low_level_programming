#include <stdio.h>
/**
 * main - it prints all possible combinations,
 * of two two-digit numbers.
 *
 * Return: Always 0
 *
 */

int main(void)

{
	int b, g;

	for (b = 0; b < 100; b++)

	{

		for (g = 0; g < 100; g++)

		{

			if (b < g)

			{

				putchar((b / 10) + 48);

				putchar((b % 10) + 48);

				putchar(' ');

				putchar((g / 10) + 48);

				putchar((g % 10) + 48);

			               if (b != 98 || g != 99)

				{
					putchar(',');

					putchar(' ');

				}

			}

		}

	}

	putchar('\n');

	return (0);

}
