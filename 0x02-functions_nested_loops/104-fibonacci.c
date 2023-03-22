#include <stdio.h>
/**
 * main - finds and prints the first 98 Fibonacci numbers, starting with 1 and 2,
 * Return: always 0
 */
int main() {
    // initialize variables
	int prev = 1;
	int curr = 2;
    
    // print the first two Fibonacci numbers
	printf("%d %d ", prev, curr);
    
    // loop to print the remaining 96 Fibonacci numbers
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

