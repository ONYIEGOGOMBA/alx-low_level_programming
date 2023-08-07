#include <stdlib.h>
#include <unistd.h>
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
	int bg;
	ssize_t b;
	int siz;
	char *deb;

	if (!filename)
	{
		return (-1);
	}
	bg = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (bg == -1)
		return (-1);
	if (!text_content)
	{
		close(bg);
		return (1);
	}
	siz = _strlen(text_content);
	deb = malloc(sizeof(char) * siz);
	if (!deb)
	{
		close(bg);
		return (-1);
	}
	b = write(bg, text_content, siz);
	if (b == -1)
	{
		close(bg);
		free(deb);
		return (-1);
	}
	close(bg);
	free(deb);
	return (1);
}

/**
 * _strlen - len
 *
 * @s: is a pointer to a char
 *
 * Return: Always 0.
 */
int _strlen(const char *s)
{
	int g = 0;

	while (*(s + g) != '\0')
	{
		g++;
	}
	return (g);
}
