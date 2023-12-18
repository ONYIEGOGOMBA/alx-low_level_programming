#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * create_file - append to file
 * @filename: path to file
 * @text_content: content
 * Return: chars read
 */
int create_file(const char *filename, char *text_content)
{
	int pd;
	ssize_t v;
	int size;
	char *nem;

	if (!filename)
	{
		return (-1);
	}
	pd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (pd == -1)
		return (-1);
	if (!text_content)
	{
		close(pd);
		return (1);
	}
	size = _strlen(text_content);
	nem = malloc(sizeof(char) * size);
	if (!nem)
	{
		close(pd);
		return (-1);
	}
	v = write(pd, text_content, size);
	if (v == -1)
	{
		close(pd);
		free(nem);
		return (-1);
	}
	close(pd);
	free(nem);
	return (1);
}

/**
 * _strlen - len
 * @s: is a pointer to a char
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int a = 0;

	while (*(s + a) != '\0')
	{
		a++;
	}

	return (a);
}
