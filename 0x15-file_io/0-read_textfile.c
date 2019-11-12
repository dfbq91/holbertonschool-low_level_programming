#include "holberton.h"

/**
 * read_textfile - reads a text file and prints to stdout.
 * @filename: name of the file
 * @letters: number of letters it should read and print
 * Return: 0 if filename is NULL or if write fails, or number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buf;
	ssize_t ntoprint;

	if (filename == NULL)
		return (0);

	/*Abro archivo y retorno fd con flag RDONLY y valido error*/
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	/*Crea espacio en dinamic memory que contiene el número de letters*/
	buf = malloc(letters);
	if (buf == NULL)
		return (0);

	/*Leo el n de letterse (bytes) en buf para fd y lo asigno a ntoprint*/
	ntoprint = read(fd, buf, letters);
	if (ntoprint == -1)
	{
		free(buf);
		close(fd);
		return (0);
	}

	/*imprimo el # de caracteres en buf del fd y asigno a variable ese número*/
	ntoprint = write(STDOUT_FILENO, buf, ntoprint);
	if (ntoprint == -1)
	{
		close(fd);
		free(buf);
		return (0);
	}

	free(buf);
	close(fd);
	return (ntoprint);
}
