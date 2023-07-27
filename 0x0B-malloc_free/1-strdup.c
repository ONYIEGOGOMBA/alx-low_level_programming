#include "main.h"
#include <stdlib.h>
/**
 * _strdup - copies the string given as parameter
 * @str: string to duplicate
 *
 * Return: pointer to the copied string (Success), NULL (Error)
 */
char *_strdup(char *str)
{
	char *ali;
	unsigned int i, len;

	i = 0;
	len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len])
		len++;

	ali = malloc(sizeof(char) * (len + 1));

	if (ali == NULL)
		return (NULL);

	while ((ali[i] = str[i]) != '\0')
		i++;

	return (ali);
}
