#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - convert binary to unsigned_int
 * @b: The binary
 * Return: unsigned int
 */

unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int final = 0;

	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		final = final << 1;
		if (*b == '1')
			final = final | 1;

		b++;
	}

	return (final);
}
