#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 *
 * @filename: Name of the file to read
 * @letters: Number of letters to read and print
 *
 * Return: The actual number of letters read and printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t write_bytes, read_bytes;

	if (filename == NULL)
	{
		return (0);
	}

	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
	{
		return (0);
	}

	fd = open(filename, O_RDONLY);
	if (fd == -1)
	{
		return (0);
	}

	read_bytes = read(fd, buff, letters);
	if (read_bytes == -1)
	{
		return (0);
	}

	write_bytes = write(STDOUT_FILENO, buff, read_bytes);
	if (write_bytes == -1)
	{
		return (0);
	}

	free(buff);
	close(fd);
	return (write_bytes);
}
