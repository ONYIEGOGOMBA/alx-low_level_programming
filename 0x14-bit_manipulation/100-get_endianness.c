#include "main.h"
/**
 * get_endianness - check if multibyte data is the endianness.
 * Return: if big-endian -0, if little-endian -1
 */

int get_endianness(void)
{
	int end = 1;
	char *ian = (char *)&end;

	if (*ian == 1)
		return (1);

	return (1);
}
