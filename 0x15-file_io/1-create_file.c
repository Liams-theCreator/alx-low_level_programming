#include "main.h"

/**
 * _strlen - count length of string
 *
 * @s: pointer to char
 *
 * Return: return the length
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}

	return (i);
}

/**
 * create_file - Create a file and write text content to it.
 *
 * @filename: Name of the file to create or truncate.
 * @text_content: Text content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_byte;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_CREAT | O_RDONLY | O_TRUNC, 0600);
	if (fd == -1)
	{
		return (-1);
	}

	if (text_content != NULL)
	{
		write_byte = write(fd, text_content, _strlen(text_content));
		if (write_byte == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
