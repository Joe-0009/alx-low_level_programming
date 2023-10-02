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
	size_t file, i;


	if (filename == NULL)
		return (-1);

	file = open(filename, O_APPEND | O_WRONLY);
	if (open == -1)
		return (-1);


	if (text_content != NULL)
	{
		while (text_content[i] != '\0')
			i++;
		num_ww = write(file, text_content, i);
		if (num_ww == NULL)
			return (-1);
	}
	close(file);
	return (1);
}
