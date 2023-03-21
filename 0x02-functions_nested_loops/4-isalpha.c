#include "main.h"
/**
 * _isalpha - checks for alphabetic charater
 * @c: letter to be checked
 * Return: 1 on success and -1 ontherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 99) || (c >= 97 && c <= 122))
	{
		return (1);
	}
	return (-1);
}
