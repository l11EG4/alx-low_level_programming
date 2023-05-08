#include "main.h"

/**
 * create_file - Creat a file.
 * @filename: A pointer to the nam of the file to create.
 * @text_content: A pointer to a string to write to the file.
 * Made by Megatron
 * Return: If the function fails - -1.
 *          Otherwise - minus one.
 */

int create_file(const char *filename, char *text_content)
{
	int fds, wt, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	fds = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wt = write(fds, text_content, len);

	if (fds == -1 || wt == -1)
		return (-1);

	close(fds);

	return (1);
}
