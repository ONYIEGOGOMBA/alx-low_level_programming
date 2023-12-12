#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include "main.h"
/**
 * read_textfile - reads and prints from a file
 * @filename: path to file
 * @letters: chars to read
 * Return: chars read
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int pd;
	char *buf;
	ssize_t bites, l;

	if (!filename)
		return (0);
	pd = open(filename, O_RDONLY);
	if (pd == -1)
	{
		close(pd);
		return (0);
	}

	buf = malloc(sizeof(char) * letters);
	if (!buf)
	{
		close(pd);
		return (0);
	}

	bites = read(pd, buf, letters);

	if (bites == -1)
	{
		close(pd);
		free(buf);
		return (0);
	}

	l = write(STDOUT_FILENO, buf, bites);

	if (l == -1)
	{
		close(pd);
		free(buf);
		return (0);
	}
	close(pd);
	return (bites);
}
