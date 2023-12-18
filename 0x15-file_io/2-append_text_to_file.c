#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * append_text_to_file - apends text to file
 * @filename: path to file
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int pd;
	ssize_t v;
	int size;

	if (!filename)
		return (-1);

	pd = open(filename, O_WRONLY | O_APPEND);

	if (pd == -1)
		return (-1);

	if (!text_content)
	{
		close(pd);
		return (1);
	}

	size = _strlen(text_content);
	v = write(pd, text_content, size);

	if (v == -1)
	{
		close(pd);
		return (-1);
	}
	close(pd);
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
