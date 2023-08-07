#include "main.h"



int main(int argc, char *argv[])
{
	char *buffer;
	int fo_to, fo_fro, fr_fro, fw_to , wc;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		free(buffer);
		exit(97);
	}
	
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to");
		exit(97);
	}
	fo_fro = open(argv[1], O_RDONLY);
	if (fo_fro == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n",argv[1]);
		exit(98);
	}

	fo_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fo_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	
	while ((fr_fro = read(fo_fro, buffer, 1024)) > 0)
	{
		fw_to = write(fo_to, buffer, fr_fro);
		if (fw_to == -1 || fr_fro != fw_to)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(fo_fro);
			close(fo_to);
			exit(99);
		}
	}

	if (fr_fro == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		close(fo_fro);
		close(fo_to);
	}
	
	if (close(fo_to) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fo_to);
		exit(100);
	}

	if (close(fo_fro) == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fo_fro);
		exit(100);
	}
	return(0);
}
