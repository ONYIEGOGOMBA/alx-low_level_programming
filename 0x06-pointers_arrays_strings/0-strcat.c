#include "main.h"
/**
 * _strcat - function that concatenates two strings.
 * @dest: pointer to destnation input
 * @src: pointer to source input
 * Return: pointer to resulting string @dest
 */
char *_strcat(char *dest, char *src)
{
	int s, d;

	s = 0;
	/*find the size of dest array*/
	while (dest[s])
		s++;

	/* iterate through each src array value without the null byte*/
	for (d = 0; src[d] ; d++)
	/*append src[d] to dest[s] while overwritting the null byte in dest*/
		dest[s++] = src[d];

	return (dest);
}
