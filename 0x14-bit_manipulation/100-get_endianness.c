#include "main.h"
/**
 * get_endianness - gets endianneess
 * Return: ptr
 */
int get_endianness(void)
{
	unsigned int num = 1;
	unsigned char *ptr = (unsigned char *)&num;

	return (*ptr == 1);
}
