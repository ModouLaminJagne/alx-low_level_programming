#include "main.h"
/**
 * print_binary - prints the binary equivalent of a decimal number
 * @n: number to print in binary
 */
void print_binary(unsigned long int n)
{
	int j = 63, count = 0;
	unsigned long int current;

	while (j >= 0)
	{
		current = n >> j;
		if (current & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
		{
			_putchar('0');
		}
	}
	j++;
	if (!count)
	{
		_putchar('0');
	}
}
