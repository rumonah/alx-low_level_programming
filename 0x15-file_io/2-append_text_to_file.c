#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: is the name of the file
 * @text_content: string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int rwr;
	int newlet;
	int file_a;

	if (!filename)
		return (-1);

	file_a = open(filename, O_WRONLY | O_APPEND);

	if (file_a == -1)
		return (-1);

	if (text_content)
	{
		for (newlet = 0 ; text_content[newlet];)
			newlet++;
	}
	rwr = write(file_a, text_content, newlet);

	if (rwr == -1)
		return (-1);

	close(file_a);

	return (1);
}
