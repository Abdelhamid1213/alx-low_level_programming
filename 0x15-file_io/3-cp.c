#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <sys/types.h>

#define BUFFER_SIZE 1024

/**
 * check_args - ..
 * @argc: ..
 */

void check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
}

/**
 * open_files - ..
 * @argv: ..
 * Return: ..
 */

int open_files(char *argv[])
{
	int src_fd, dest_fd;
	mode_t mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;

	src_fd = open(argv[1], O_RDONLY);

	if (src_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from %s\n", argv[1]);
		exit(98);
	}

	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, mode);

	if (dest_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	return (dest_fd);
}

/**
 * copy_data - ..
 * @src_fd: ..
 * @dest_fd: ..
 */

void copy_data(int src_fd, int dest_fd)
{
	int bytes_read, bytes_written;
	char buffer[BUFFER_SIZE];

	while ((bytes_read = read(src_fd, buffer, BUFFER_SIZE)) > 0)
	{
		bytes_written = write(dest_fd, buffer, bytes_read);

		if (bytes_written == -1)
		{
			dprintf(STDERR_FILENO, "Error writing to file\n");
			exit(99);
		}
	}

	if (bytes_read == -1)
	{
		dprintf(STDERR_FILENO, "Error reading from file\n");
		exit(98);
	}
}

/**
 * close_files - ..
 * @src_fd: ..
 * @dest_fd: ..
 */

void close_files(int src_fd, int dest_fd)
{
	if (close(src_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error closing fd %d\n", src_fd);
		exit(100);
	}

	if (close(dest_fd) == -1)
	{
		dprintf(STDERR_FILENO, "Error closing fd %d\n", dest_fd);
		exit(100);
	}
}

/**
 * main - ..
 * @argc: ..
 * @argv: ..
 * Return: ..
 */

int main(int argc, char *argv[])
{
	int src_fd, dest_fd;

	check_args(argc);

	src_fd = open(argv[1], O_RDONLY);
	dest_fd = open_files(argv);

	copy_data(src_fd, dest_fd);

	close_files(src_fd, dest_fd);

	return (0);
}
