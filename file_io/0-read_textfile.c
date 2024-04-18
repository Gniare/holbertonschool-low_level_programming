#include <fcntl.h>
#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#define BUFSIZE 1024

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: file to read from
 * @letters: size to read
 * Return: file can not opened or read, return 0, filename NULL return 0
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t n_read, n_written;
	char *buffer;

	if (filename == NULL)
		return (0);

	/* Open */
	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		perror("open");
		return (0);
	}

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		perror("malloc");
		close(fd);
		return (0);
	}

	/* Read from file */
	n_read = read(fd, buffer, letters);
	if (n_read == -1)
	{
		perror("read");
		free(buffer);
		close(fd);
		return (0);
	}

	n_written = write(STDOUT_FILENO, buffer, n_read);
	if (n_written == -1)
	{
		perror("write");
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);
	return (n_read);
}
