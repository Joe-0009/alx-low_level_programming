#include "main.h"

/**
 * append_text_to_file - a function that appends text at the end of a file.
 *
 * @filename: is the name of the file to create
 * @text_content: is the NULL terminated string
 *
 * Return: 1 on success and -1 on failure
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fo, fw, wc = 0;

	if (filename == NULL)
		return (-1);

	fo = open(filename, O_WRONLY | O_APPEND);
	if (fo == -1)
		return (-1);
	if (text_content)
	{
		while (text_content[wc] != '\0')
			wc++;
		fw = write(fo, text_content, wc);
		if (fw == -1)
			return (-1);
	}

	close(fo);

	return (1);
}

