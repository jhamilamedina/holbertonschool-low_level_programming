#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * print_rev - prints a string, in reverse
 * @s: The string to reverse
 * Return: void
 */

void print_rev(char *s)
{
const char new_line = 10;
int i;

i = strlen(s) - 1;
while (i >= 0)
{
_putchar(s[i]);
i--;
}
_putchar(new_line);
}
