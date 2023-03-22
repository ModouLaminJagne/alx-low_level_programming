#include "main.h"
/**
 * _abs - calculates the absolute value of a number
 * @c: number to check on
 * abs_val: the variable to store the absolute value
 * Return: returns the absolute value of c
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}
