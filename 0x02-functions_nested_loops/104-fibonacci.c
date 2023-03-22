#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * Return: always 0
 */
int main() {
	int prev = 1;
	int curr = 2;

	printf("%d %d ", prev, curr);

	for (int i = 3; i <= 98; i++) 
	{
	int temp = curr;
	curr = prev + curr;
	prev = temp;
	printf("%d ", curr);
	}
    printf("\n");
	return 0;
}

