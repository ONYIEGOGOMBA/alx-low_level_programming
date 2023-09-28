#include "main.h"
/**
 * binary_to_uint- convert binary to unsigned int
 * @b: binary
 * Return: unsigned int
 */
unsigned int binary_to_uint(const char *b)
{

	int nig = 0, k;
	unsigned int numb = 0, non_bi = 0;

	if (b == NULL)
		return (non_bi);

	while (b[nig] != '\0')
		nig++;
	nig -= 1;
	k = 0;
	while (b[k])
	{
		if ((b[k] != '0') && (b[k] != '1'))
			return (non_bi);

		if (b[k] == '1')
			numb += (1 * (1 << nig));
		k++;

		nig--;
	}
	return (numb);
}
