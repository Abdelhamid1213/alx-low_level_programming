#include "main.h"

/**
 * create_file - a function that creates a file
 * @filename: file to create
 * @text_content: content of file
 * Return: 1 on sucess else -1
 */

int create_file(const char *filename, char *text_content)
{
	int f;

	if (!filename)
		return (-1);

	f = open(filename, O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR | S_IWUSR);

	if (f == -1)
		return (-1);

	if (text_content)
	{
		size_t text_len = strlen(text_content);
		ssize_t bytes_written = write(f, text_content, text_len);

		if (bytes_written != text_len)
		{
			close(f);
			return (-1);
		}
	}

	close(f);
	return (1);
}
