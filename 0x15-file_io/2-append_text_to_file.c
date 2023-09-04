#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * _strlen - len
 * @s: is a pointer to a char
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int b = 0;

	while (*(s + b) != '\0')
	{
		b++;
	}

	return (b);
}
/**
 * append_text_to_file - apends text to file
 * @filename: path to file
 * @text_content: content
 * Return: 1 or -1
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int bg;
	ssize_t b;
	int siz;

	if (!filename)
		return (-1);

	bg = open(filename, O_WRONLY | O_APPEND);

	if (bg == -1)
		return (-1);

	if (!text_content)
	{
		close(bg);
		return (1);
	}

	siz = _strlen(text_content);
	b = write(bg, text_content, siz);

	if (b == -1)
	{
		close(bg);
		return (-1);
	}
	close(bg);
	return (1);
}
