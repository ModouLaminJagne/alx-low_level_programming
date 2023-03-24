#include "main.h"

/**
 * print_numbers - print numbers 0 - 9
 *@x: number to print
 * Return: Always 0 to 9
 */
void print_numbers(void)
{
	int x;

	for (x = 0; x <= 9; x++)
	{
		_putchar(x + '0');
	}
	_putchar('\n');
}
