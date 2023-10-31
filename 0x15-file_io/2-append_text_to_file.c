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
 * append_text_to_file - function that appends text at the end of a file.
 *
 * @filename: file that will be oppend.
 * @text_content: the content will be appended to the file.
 * Return: 1 if success and -1 if failed.
 *
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t write_byte;

	if (filename == NULL)
	{
		return (-1);
	}

	fd = open(filename, O_RDWR | O_CREAT | O_APPEND, 0644);
	if (fd == -1)
	{
		return (-1);
	}

	write_byte = write(fd, text_content, _strlen(text_content));
	if (write_byte == -1)
	{
		close(fd);
		return (-1);
	}

	close(fd);
	return (1);
}
