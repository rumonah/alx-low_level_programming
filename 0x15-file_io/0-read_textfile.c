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
 * Return: leng2- actual number of letters it could read and print,
 * 0 when function fails or filename is NULL. 
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t the_file;
	ssize_t leng1, leng2;

	the_file = open(filename, O_RDONLY);
	if (the_file == -1)
		return (0);
	buffer = malloc(sizeof(char) * letters);
	leng1 = read(the_file, buffer, letters);
	leng2 = write(STDOUT_FILENO, buffer, leng1);

	free(buffer);
	close(the_file);
	return (leng2);
}
