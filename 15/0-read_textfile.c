#include "main.h"

/**
 * read_textfile -  reads a text file and prints it to
 *                           the POSIX standard output
 * @filename: file to read
 * @letters: number of letters printed
 * Return: number of letters it could read and print
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_count, write_count;
	char *buffer;
	int f;

	if (!filename)
		return (0);

	f = open(filename, O_RDONLY);

	if (f == -1)
		return (0);

	buffer = malloc(letters);

	if (!buffer)
	{
		free(buffer);
		return (0);
	}

	read_count = read(f, buffer, letters);
	if (read_count == -1)
		return (0);

	write_count = write(STDOUT_FILENO, buffer, read_count);
	if (write_count == -1 || read_count != write_count)
		return (0);

	free(buffer);
	close(f);

	return (write_count);
}
