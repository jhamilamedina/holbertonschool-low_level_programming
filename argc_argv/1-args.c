#include "main.h"
#include <stdio.h>

/**
 * main - prints the numbers of arguments
 * @argc: contains the number of arguments
 * @argv: array of character pointers
 * Return: Always 0.
 */

int main(int argc, char *argv[])
{
(void)argv;
printf("%d\n", argc - 1);
return (0);
}
