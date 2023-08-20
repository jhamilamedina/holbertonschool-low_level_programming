#include "main.h"
#include <stdio.h>

/**
 * print_array - prints n elements of an arrays of integers
 * @a: array of integers
 * @n: Number of elements of the array to be printed
 * Return: void
 */

void print_array(int *a, int n)
{
int m;
m = 0;
while (m < n)
{
printf("%d", *(a + m));
if (m != n - 1)
{
printf(", ");
}
m++;
}
printf("\n");
}
