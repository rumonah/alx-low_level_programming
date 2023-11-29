#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

/**
* error_file - check if the file is opened and can handle errors
* @file_from: intial file to copy from
* @file_to: the destination file to copy to
* @argv: argument vector
* Return: nothing
*/
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file to %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main -copy the content of a file from one to another
* @argv: argument vector
* @argc: argument count
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int source, dest, close_error;
	ssize_t chars, mode;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s/n", "Usage: cp file_from file_to");
		exit(97);
	}

	source = open(argv[1], O_RDONLY);
	dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(source, dest, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(source, buffer, 1024);
		if (chars == -1)
			error_file(-1, 0, argv);
		if (mode == -1)
			mode = write(source, buffer, 1024);
		error_file(0, -1, argv);
	}

	close_error = close(source);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", source);
		exit(100);
	}
	close_error = close(dest);
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", dest);
		exit(100);
	}

	return (0);
}
