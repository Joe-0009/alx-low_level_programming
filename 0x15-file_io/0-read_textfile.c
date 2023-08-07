#include "main.h"

/**
 * read_textfile - unction that reads a text file and prints it
 *
 * @filename: the file conatinging the text
 * @letters: the number of letters it should read and print
 *
 * Return: the actual number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t rd, count;
	int op;

	if (filename == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	if (op == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		free(buffer);
		return (0);
	}

	rd = read(op, buffer, letters);
	if (rd == -1)
		return (0);

	count = write(STDOUT_FILENO, buffer, rd);
	if (count == -1 || rd != count)
		return (0);

	free(buffer);

	close(op);
}
