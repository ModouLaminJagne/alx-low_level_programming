#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Prints all numbers from 0 - 98
 * @n: natural number
 * Return: natural numbers
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
				printf("%d, ", n);
		}
	}
	else
	{
		for (; n >= 98; n--)
		{
			if (n == 98)
			{
				printf("%d", n);
				printf("\n");
				break;
			}
				printf("%d, ", n);
		}
	}
}
