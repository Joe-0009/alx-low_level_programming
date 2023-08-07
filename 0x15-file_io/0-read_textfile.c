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
	char buffer[letters];
	ssize_t rd, count;
	int fd;

	if (filename == NULL)
		return (0);

	fd = open(filename, 0_RDONLY);
	if (fd == -1)
		return (0);

	rd = read(filename, buffer, sizeof(buffer));
	if (rd == -1)
		return (0);

	count = write(1, buffer, rd);
	if (count == -1 || rd != count)
		return (0);

	close(file);
}
