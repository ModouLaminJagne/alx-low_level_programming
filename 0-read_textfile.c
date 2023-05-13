#include "main.h"
#include <stdlib.h>
/**
 * read_textfile- Read text file and print to STDOUT.
 * @filename: text file to be read
 * @letters: number of letters to be read
 * Return: w- number of bytes read and prints
 *        0 if function fails/filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t frd;
	ssize_t wryt;
	ssize_t st;

	frd = open(filename, O_RDONLY);
	if (frd == -1)
	{
		return (0);
	}
	buf = malloc(sizeof(char) * letters);
	st = read(frd, buf, letters);
	wryt = write(STDOUT_FILENO, buf, st);
	free(buf);
	close(frd);
	return (wryt);
}
