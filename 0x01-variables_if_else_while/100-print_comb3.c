#include <stdio.h>
/**
 * main - Print all possible different combinations of two digits.
 * Return: 0
 */
int main(void)
{
	int n;
	int m;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			if (n < m && n != m)
			{
			putchar(n + '0');
			putchar(m + '0');
			putchar(',');
			putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
