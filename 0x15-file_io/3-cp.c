#include "holberton.h"

/**
 * main - function to create cp command
 * @argc: number of files, always 2
 * @argv: each file as a parameter
 * Return: 0 on success.
 */

int main(int argc, char **argv)
{
	int file_from, file_to, n_file_from;
	int i = 1;
	char buffer[1024];

	if (argc != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);
	file_from = open(argv[i], O_RDONLY); /*Asigno file descriptor a file_from*/
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[i]);
		exit(98);
	}
	file_to = open(argv[i + 1], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[i + 1]);
		exit(99);
	}
	while ((n_file_from = read(file_from, buffer, 1024)) > 0)
	{
		if (n_file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[i]);
			exit(98);
		}
		n_file_from = write(file_to, buffer, n_file_from);
		if (n_file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[i + 1]);
			exit(99);
		}
	}
	n_file_from = close(file_from);
	if (n_file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	n_file_from = close(file_to);
	if (n_file_from == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	return (0);
}
