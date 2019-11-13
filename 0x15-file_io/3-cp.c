#include "holberton.h"

/**
 * main - function to create cp command
 * @argc: number of files, always 2
 * @argv: each file as a parameter
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int file_from, file_to, n_file_read, n_file_write;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	while ((n_file_read = read(file_from, buffer, 1024)) > 0)
	{
		n_file_write = write(file_to, buffer, n_file_read);
		if (n_file_write == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}
	if (n_file_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	n_file_read = close(file_from);
	if (n_file_read == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	n_file_write = close(file_to);
	if (n_file_write == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
