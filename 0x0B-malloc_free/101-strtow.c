#include "main.h"
#include <stdlib.h>

int word_len(char *str);
int count_words(char *str);
char **strtow(char *str);
/**
 * word_len - Locating index marking
 * @str: String to be located
 * Return: The index marking
 */
int word_len(char *str)
{
	int ind = 0, len = 0;

	while (*(str + ind) && *(str + ind) != ' ')
	{
		len++;
		ind++;
	}
	return (len);
}

/**
 * count_words - counts no of words in a string
 * @str: The string
 * Return: No of words in a string
 */
int count_words(char *str)
{
	int ind = 0, wrd = 0, len = 0;

	for (ind = 0; *(str + ind); ind++)
		len++;

	for (ind = 0; ind < len; ind++)
	{
		if (*(str + ind) != ' ')
		{
			wrd++;
			ind += word_len(str + ind);
		}
	}
	return (wrd);
}

/**
 * strtow - splits a string into words
 * @str: string to be split
 * Return: As per the instructions in quiz 6
 */
char **strtow(char *str)
{
	char **strs;
	int ind = 0, wrd, x, letters, y;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	wrd = count_words(str);
	if (wrd == 0)
		return (NULL);
	strs = malloc(sizeof(char *) * (wrd + 1));
	if (strs == NULL)
		return (NULL);

	for (x = 0; x < wrd; x++)
	{
		while (str[ind] == ' ')
			ind++;
		letters = word_len(str + ind);

		strs[x] = malloc(sizeof(char) * (letters + 1));

		if (strs[x] == NULL)
		{
			for (; x >= 0; x++)
				free(strs[x]);
			free(strs);
			return (NULL);
		}

		for (y = 0; y < letters; y++)
			strs[x][y] = str[ind++];
		strs[x][y] = '\0';
	}
	strs[x] = NULL;
	return (strs);
}
