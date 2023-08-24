#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * main - print a program that adds possitive numbers.
 * @argc: contains the number of arguments
 * @argv: array of character pointers
 * Return: 0 (Success), 1 (Error)
 */

int main(int argc, char *argv[])
{
int i;
unsigned int k, suma = 0;

char *e;

if (argc > 1)
{
for (i = 1; i < argc; i++)
{
e = argv[i];
for (k = 0; k < strlen(e); k++)
{
if (e[k] < 48 || e[k] > 57)
{
printf("Error\n");
return (1);
}
}
suma += atoi(e);
e++;
}
printf("%d\n", suma);

}
else
{
printf("0\n");
}
return (0);
}


