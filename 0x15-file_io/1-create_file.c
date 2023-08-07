#include "main.h"

/**
 * create_file - Creating a file.
 * @filename: A pointer to file created.
 * @text_content: A pointer to a string to be in the file.
 *
 * Return: If the function fails - -1.
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int nam, man, lng = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lng = 0; text_content[lng];)
			lng++;
	}

	nam = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	man = write(nam, text_content, lng);

	if (nam == -1 || man == -1)
		return (-1);

	close(nam);

	return (1);
}
