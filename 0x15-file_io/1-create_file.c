#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of the file to create
 * @text_content: NULL string to write the file
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int d_file, gra, leng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (leng = 0 ; text_content[leng];)
			leng++;
	}

	d_file = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	gra = write(d_file, text_content, leng);

	if (d_file == -1 || gra == -1)
		return (-1);

	close(d_file);
	return (1);
}
