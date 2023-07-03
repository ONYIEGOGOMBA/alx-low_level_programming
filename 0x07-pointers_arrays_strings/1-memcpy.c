#include "main.h"
/**
 * _memcpy - function that copies memory area
 * @src: what we are to copy
 * @n: n bytes of @src
 * @dest: buffer where we will copy to
 *
 * Return: Always 0
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int x;

	for (x = 0; x < n; x++)
		dest[x] = src[x];
	return (dest);
}
