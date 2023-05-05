#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n1: first number
 * @n2: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n1, unsigned long int n2)
{
	int k, cnt = 0;
	unsigned long int current_num;
	unsigned long int indx = n1 ^ n2;

	for (k = 63; k >= 0; k--)
	{
		current_num = indx >> k;
		if (current_num & 1)
		{
			cnt++;
		}
	}
	return (cnt);
}
