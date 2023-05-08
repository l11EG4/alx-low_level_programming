#include "main.h"

/**
 * append_text_to_file - Appends text at d end of a file.
 * @filename: A pointer to d nam of the file.
 * @text_content: The string to add to the end of d file.
 * Made by Megatron
 * Return: If d function fails or filename is NULL - -1.
 *         If d file does not exist d user lacks write permissions - -1.
 *         Otherwise - minus zero.
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int cmp, wt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}
	cmp = open(filename, O_WRONLY | O_APPEND);
	wt = write(cmp, text_content, len);

	if (cmp == -1 || wt == -1)
		return (-1);
	close(cmp);

	return (1);
}
