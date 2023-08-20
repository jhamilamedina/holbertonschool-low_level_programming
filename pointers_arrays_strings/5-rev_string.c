#include "main.h"
#include <stdio.h>

/**
 * rev_string - reverses a string
 * @s: string to be reversed
 * Description: Get parameter "s" and reverse the string
 * Return: void
 */

void rev_string(char *s)
{
int a, c, b = 0;
char temp;

while (*s != '\0')
{
b++;
s++;
}
s = s - b;
a = b / 2;

for (c = 0; c < a; c++)
{
temp = s[c];
s[c] = s[b - c - 1];
s[b - c - 1] = temp;
}
}
