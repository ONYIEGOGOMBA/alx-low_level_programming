#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
 * _strlen - Calculate the length of a string
 * @str: The input string
 * Return: The length of the string
 */
int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
	 len++;
	}
	return (len);
}

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
