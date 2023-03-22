#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 * Return: always 0
 */
int main(void)
{
	long j = 1, k = 2, sum = 0;
	int temp;

	while (k <= 4000000)
	{
		if (k % 2 == 0)
		{
			sum += k;
		}
		temp = k;
		k = j + k;
		j = temp;
	}
	printf("%ld\n", sum);
	return (0);
}
