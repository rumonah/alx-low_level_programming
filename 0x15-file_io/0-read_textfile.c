#include "main.h"
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @letters: number of letters it should read and print
 * @filename: name of file to read
 * Return: actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t the_file;
	ssize_t leng1, leng2;

	if (filename == NULL)
		return (0);
	the_file = open(filename, O_RDONLY);
	if (the_file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(the_file);
		return (0);
	}
	leng1 = read(the_file, buffer, letters);
	close(the_file);
	if (leng1 == -1)
	{
		free(buffer);
		return (0);
	}
	leng2 = write(STDOUT_FILENO, buffer, leng1);
	free(buffer);
	if (leng1 != leng2)
		return (0);
	return (leng2);
}
