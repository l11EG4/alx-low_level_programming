#include "main.h"

char *create_buffer(char *file);
void close_file(int fd);

/**
 * create_buffer - Allocates 1024 bytes for a buffer.
 * @file: d nam of d file buffer is storing chars for.
 * Made by Megatron
 * Return: A pointer to the newly-allocated buffer.
 */

char *create_buffer(char *file)
{
	char *buffr;

	buffr = malloc(sizeof(char) * 1024);

	if (buffr == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (buffr);
}

/**
 * close_file - Closes file descriptors.
 * @fd: d file descriptor to be closed.
 * Made by Megatron
 */

void close_file(int fd)
{
	int ch;

	ch = close(fd);

	if (ch == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies d contents of a file to another file.
 * @argc: The number of arguments supplied to d program.
 * @argv: An array of pointers to d arguments.
 * Made by Megatron
 * Return: zero on success.
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */

int main(int argc, char *argv[])
{
	int frm, t, rd, wt;
	char *buffr;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buffr = create_buffer(argv[2]);
	frm = open(argv[1], O_RDONLY);
	rd = read(frm, buffr, 1024);
	t = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (frm == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffr);
			exit(98);
		}

		wt = write(t, buffr, rd);
		if (t == -1 || wt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffr);
			exit(99);
		}

		rd = read(frm, buffr, 1024);
		t = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(buffr);
	close_file(frm);
	close_file(t);

	return (0);
}
