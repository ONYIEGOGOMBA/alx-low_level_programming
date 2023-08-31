#include "main.h"
#include <stddef.h>
/**
 * binary_to_uint - Start of the code
 * @b: A constant character
 * Return: Always 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int res = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);
		res = res << 1;
		if (*b == '1')
			res = res | 1;
		b++;
	}
	return (res);
}
