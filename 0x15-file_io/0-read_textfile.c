#include <stdlib.h>
#include "main.h"
/**
 * read_textfile- Readimg text file printing it to STDOUT.
 * @filename: The text file
 * @letters: Letters
 * Return: w- actual number of bytes read and printed
 *        0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *fil;
	ssize_t doe;
	ssize_t w;
	ssize_t the;

	doe = open(filename, O_RDONLY);
	if (doe == -1)
		return (0);
	fil = malloc(sizeof(char) * letters);
	the = read(doe, fil, letters);
	w = write(STDOUT_FILENO, fil, the);

	free(fil);
	close(doe);
	return (w);
}
