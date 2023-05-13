#include "main.h"
#include <stdio.h>
#include <stdlib.h>
char *create_buffer(char *file);
void close_file(int fd);
/**
 * create_buffer - Allocates 1024 bytes to a buffer.
 * @file: Name of the file buffer is storing chars for.
 * Return: A pointer to the newly-allocated buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes the file descriptors.
 * @fd: The file descriptor to be closed.
 */
void close_file(int fd)
{
	int clos;

	clos = close(fd);
	if (clos == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}
/**
 * main - Copies the contents of a file to another file.
 * @argc: The number of arguments passed to the program.
 * @argv: An array of pointers to the arguments.
 * Return: 0 on success.
 *
 * Description: exit code is 97 If the argument count is incorrect.
 * exit code is 98 If file_from does not exist or cannot be read.
 * exit code is 99 If file_to cannot be created or written to.
 * exit code is 100 If file_to or file_from cannot be closed.
 */
int main(int argc, char *argv[])
{
	int fyl_from, fyl_to, reeed, wryt;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	fyl_from = open(argv[1], O_RDONLY);
	reeed = read(fyl_from, buffer, 1024);
	fyl_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (fyl_from == -1 || reeed == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		wryt = write(fyl_to, buffer, reeed);
		if (fyl_to == -1 || wryt == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		reeed = read(fyl_from, buffer, 1024);
		fyl_to = open(argv[2], O_WRONLY | O_APPEND);
	} while (reeed > 0);
	free(buffer);
	close_file(fyl_from);
	close_file(fyl_to);
	return (0);
}
