#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - reads a text file and prints it to the
 * POSIX standard output
 * @letters: the number of letters it should read and write
 * @filename: name of file to read
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *c;
	ssize_t file;
	ssize_t l, k;

	if (filename == NULL)
		return (0);
	file = open(filename, O_RDONLY);

	if (file == -1)
		return (0);
	c = malloc(sizeof(char) * letters);
	if (c == NULL)
	{
		close(file);
		return (0);
	}
	l = read(file, c, letters);
	close(file);

	if (l == -1)
	{
		free(c);
		return (0);
	}
	k = write(STDOUT_FILENO, c, l);
	free(c);
	if (l != k)
		return (0);
	return (k);
}
