#include "main.h"
/**
 * print_alphabet_x10 - print the alphabets 10 times followed by a new line
 * return: void
 */
void print_alphabet_x10(void)
{
	char a, c;

	for (a = 1; a <= 10; a++)
	{
		for (c  = 'a'; c <= 'z'; c++)
		{
			_putchar(c);
		}
		_putchar('\n');
	}
}
