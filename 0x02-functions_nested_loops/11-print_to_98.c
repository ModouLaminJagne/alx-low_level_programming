#include "main.h"
/**
 * print_to_98 - Prints all numbers from 0 - 98
 * @n: natural number
 * Return: natural numbers
 */
void print_to_98(int n)
{
	for (n = 0; n <= 98; n++)
	{
		_putchar(n);
		_putchar(',');
		_putchar(' ');
	}
	_putchar('\n');
	/*return (0);*/
}
