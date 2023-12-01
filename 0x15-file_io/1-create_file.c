#include "main.h"

/**
 * create file - function that creates a file.
 * @filename: name of the file to be created
 * @text_content:  is NULL terminated string
 * to write to the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int file, r, txt = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (txt = 0 ; text_content[txt];)
			txt++;
	}

	file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	r = write(file, text_content, txt);

	if (file == -1 || r == -1)
		return (1);

	close(file);
	return (1);
}
