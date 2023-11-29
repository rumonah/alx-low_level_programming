#include <stdio.h>
#include "main.h"

/**
* error_file - check if the filecan be opened
* @file_from: intial file to copy from
* @file_to: the destination file to copy to
* @argv: argument vector
* Return: no return
*/
void error_file(int file_from, int file_to, char *argv[])
{
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
* main - copy the content of a file from one to another
* @argv: argument vector
* @argc: argument count
* Return: 0 success
*/
int main(int argc, char *argv[])
{
	int file_from, file_to, close_error;
	ssize_t chars, mode;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s/n", "Usage: cp file_from file_to");
		exit(97);
	}

	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error_file(file_from, file_to, argv);

	chars = 1024;
	while (chars == 1024)
	{
		chars = read(file_from, buffer, 1024);
		if (chars == -1)
			error_file(-1, 0, argv);
		mode = write(file_to, buffer, chars);
		if (mode == -1)
			error_file(0, -1, argv);
	}

	close_error = close(file_from);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", file_from);
		exit(100);
	}
	close_error = close(file_to);
	if (close_error == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d/n", file_from);
		exit(100);
	}

	return (0);
}
