#include "main.h"
#include <stdio.h>
/**
 * _puts - prints a srting
 * @str: the string to be printed
 * Return: void
 */
void _puts(char *str)
{
	for (; *str != '\0'; str++)
	{
		_puthchar(*str);
	}
	_putchar('\n');
}
