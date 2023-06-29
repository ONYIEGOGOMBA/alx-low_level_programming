#include "main.h"
/**
 * _strncat - a function that concatenates two strings.
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number of bytes from @src
 *
 * Return: @dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s, d;

	s = 0;

	/*find size of dest array*/
	while (dest[s])
		s++;

	/**
	 * src does not need to be null terminated
	 * if it contains n or more bytes
	 */
	for (d = 0; d < n && src[d] != '\0'; d++)
		dest[s + d] = src[d];
	/*null terminate dest*/
	dest[s + d] = '\0';

	return (dest);
}
