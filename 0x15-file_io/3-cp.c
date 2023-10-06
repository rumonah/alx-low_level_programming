#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <sys/types.h>
#include <unistd.h>
#include <fcntl.h>
#include "main.h"

void check_IO_stat(int stat, int fd, char *filename, char mode);
/**
 * main - copies the content of one file to another
 * @argc: argument count
 * @argv: argument passed
 * Return: 1 on successs, exit otherwise
 */
int main(int argc, char *argv[])
{
	int dest, n_read, src = 1024, wrote, close_src, close_dest;
	unsigned int mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH;
	char buf[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s", "Usage: cp file_from file_to\n");
		exit(97);
	}
	src = open(argv[1], O_RDONLY);
	check_IO_stat(src, -1, argv[1], 'O');
	dest = open(argv[2], O_RDONLY | O_CREAT | O_TRUNC, mode);
	check_IO_stat(dest, -1, argv[2], 'W');
	while (n_read == 1024)
	{
		n_read = read(src, buf, sizeof(buf));
		if (n_read == -1)
			check_IO_stat(-1, -1, argv[1], 'O');
		wrote = write(dest, buf, n_read);
		if (wrote == -1)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	close_src = close(src);
	check_IO_stat(close_src, src, NULL, 'C');
	close_dest = close(dest);
	check_IO_stat(close_dest, dest, NULL, 'C');
	return (0);
}

/**
 * check_IO_stat - checks if a file can be opened or closed
 * @stat: file descriptor of file to be opened
 * @filename: files name
 * @mode: opening or closing
 * @fd: file descriptor
 * Return: void
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd FD_VALUE %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * create_buffer - allocates 1024 bytes for buffer
 * @file: name of file buffer is storing chars for
 * Return: new allocated buffer
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - close file description
 * @fd: file description to be closed
 */

void close_file(int fd)
{
	int all;

	all = close(fd);

	if (all == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}