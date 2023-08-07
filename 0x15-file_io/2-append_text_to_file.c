#include "main.h"

/**
 * append_text_to_file - Text apendera t the end of a file.
 * @filename: A pointer file's name.
 * @text_content: The string added to the end of the file.
 *
 * Return: Function fails or filename is NULL - -1.
 *         File does not exist the user lacks write permissions - -1.
 *         Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int one, two, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	one = open(filename, O_WRONLY | O_APPEND);
	two = write(one, text_content, len);

	if (one == -1 || two == -1)
		return (-1);

	close(one);

	return (1);
}
