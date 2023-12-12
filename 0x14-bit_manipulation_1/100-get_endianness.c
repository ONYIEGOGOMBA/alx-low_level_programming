#include "main.h"
/**
 * get_endianness - checks if multibyte data is the endianness.
 * Return: If big-endian - 0, if little-endian -1.
 */
int get_endianness(void)
{
	int numb = 1;
	char *endiann = (char *)&numb;

	if (*endiann == 1)
		return (1);
	return (1);
}
