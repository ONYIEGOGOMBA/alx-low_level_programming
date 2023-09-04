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
	int bg;
	char *buff;
	ssize_t bites, b;

	if (!filename)
		return (0);
	bg = open(filename, O_RDONLY);
	if (bg == -1)
	{
		close(bg);
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (!buff)
	{
		close(bg);
		return (0);
	}

	bites = read(bg, buff, letters);

	if (bites == -1)
	{
		close(bg);
		free(buff);
		return (0);
	}

	b = write(STDOUT_FILENO, buff, bites);

	if (b == -1)
	{
		close(bg);
		free(buff);
		return (0);
	}
	close(bg);
	return (bites);
}
