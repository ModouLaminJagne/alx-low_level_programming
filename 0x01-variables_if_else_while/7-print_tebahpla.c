#include <stdio.h>
/**
 * main - Print the lowercase alphabets in reverse.
 * Return: 0
 */
int main(void)
{
	int n;

	while (n >= 97)
	{
		putchar(n);
		n--;
	}
	putchar('\n');
	return (0);
}
