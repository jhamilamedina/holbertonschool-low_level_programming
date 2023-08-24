#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the result of the multiplication
 * @argc: contains the number of arguments
 * @argv: array of character pointers
 * Return: 0 (Success), 1 (Error)
 */


int main(int argc, char *argv[])
{
int n1 = 0, n2 = 0;

if (argc == 3)
{
n1 = atoi(argv[1]);
n2 = atoi(argv[2]);
printf("%d\n", n1 *n2);
}
else
{
printf("Error\n");
return (1);
}
return (0);
}



