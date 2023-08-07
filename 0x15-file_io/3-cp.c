#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocating bytes for a buffer.
 * @file: File buffer is storing chars for.
 *
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

/**
 * close_file - Closing file descriptors.
 * @fd: The file descriptor.
 */
void close_file(int fd)
{
	int cp;

	cp = close(fd);

	if (cp == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copying contents of a file to another new file
 * @argc: The number of arguments supplied.
 * @argv: An array of pointers to the arguments.
 *
 * Return: 0 on success.
 *
 * Description: If the argc is incorrect - exit code 97.
 * If file_one does not exist or cannot be read - exit code 98.
 * If file_two cannot be created or written to - exit code 99.
 * If file_two or file_one cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int one, two, rw, wx;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buffer(argv[2]);
	one = open(argv[1], O_RDONLY);
	rw = read(one, buf, 1024);
	two = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (one == -1 || rw == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		wx = write(two, buf, rw);
		if (two == -1 || wx == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		rw = read(one, buf, 1024);
		two = open(argv[2], O_WRONLY | O_APPEND);

	} while (rw > 0);

	free(buf);
	close_file(one);
	close_file(two);

	return (0);
}
