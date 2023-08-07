#include "main.h"

/**
 * create_file - a function that creates a file.
 *
 * @filename: is the name of the file to create
 * @text_content : is a NULL terminated string to write to the file
 *
 * Return: 1 on success, -1 on failure
 */

int create_file(const char *filename, char *text_content)
{
	int fo, wc, fw;

	wc = 0;
	if (filename == NULL)
		return (-1);

	fo = open(filename, O_WRONLY | O_CREATE | O_TRUNC);
	if (fo == -1)
		return (-1);
	if (text_content != NULL)
	{
		while (*text_content != '\0')
			wc++;
		fw = write(fo, text_context, wc);

		if (fw == -1)
			return (-1);
	}
	close(fo);

	return (1);
}
