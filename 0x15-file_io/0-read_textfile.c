#include "main.h"
#include <stdlib.h>
#include <unistd.h>
#include <stddef.h>
#include <fcntl.h>
/**
 * read_textfile - reads the textfile
 * @filename: constant character
 * @letters: the size
 * Return: characters read.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int bg;
	char *bro;
	ssize_t bytes, b;

	if (!filename)
		return (0);
	bg = open(filename, O_RDONLY);
	if (bg == -1)
	{
		close(bg);
		return (0);
	}

	bro = malloc(sizeof(char) * letters);
	if (!bro)
	{
		close(bg);
		return (0);
	}

	bytes = read(bg, bro, letters);

	if (bytes == -1)
	{
		close(bg);
		free(bro);
		return (0);
	}

	b = write(STDOUT_FILENO, bro, bytes);

	if (b == -1)
	{
		close(bg);
		free(bro);
		return (0);
	}
	close(bg);
	return (bytes);
}
