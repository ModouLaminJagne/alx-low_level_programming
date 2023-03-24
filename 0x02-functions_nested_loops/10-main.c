#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int n;

    n = add(89, 9);
    printf("%d\n", n);
    
    print_triangle(2);
    print_triangle(10);
    print_triangle(1);
    print_triangle(0);

    return (0);
}
