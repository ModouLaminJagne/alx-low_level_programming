#include "main.h"
/**
 * _isupper - check for uppercase character
 * @c: character to check
 * Return: 1 on success, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
