#include "main.h"
/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the file to be created.
 * @text_content: A pointer to a string to be written to the file.
 * Return: -1 If the function fails,
 *         Otherwise - 1.
 */
int create_file(const char *filename, char *text_content)
{
	int fcrt, wryt, len = 0;

	if (filename == NULL)
	{
		return (-1);
	}
	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
		{
			len++;
		}
	}
	fcrt = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	wryt = write(fcrt, text_content, len);
	if (fcrt == -1 || wryt == -1)
	{
		return (-1);
	}
	close(fcrt);
	return (1);
}
