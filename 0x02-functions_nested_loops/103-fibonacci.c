#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: always 0
 */
int main (void)
{
	int i = 0;
	long j = 1, k = 2, sum = k;

	while (k * j < 4000000)
	{
		k += j;
		j = k - j;
		++i
	}
	printf("%ld\n", sum);
	return (0);
}
