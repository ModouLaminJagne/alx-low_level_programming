#include <stdio.h>
/**
 * _strlen - Returns the lenght of a string
 * @str: the string to get the lenght of
 * Return: the lenght of the string
 */
size_t _strlen(const char *str)
{
	size_t length = 0;

	while (*str++)
		length++;
	return (length);
}
