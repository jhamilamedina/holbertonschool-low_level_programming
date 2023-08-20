#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * puts2 - prints stdout for two character. sstarting the first character
 * @str: string a print
 * Return: void
 */

void puts2(char *str)
{

int s;
int i = 1;
const int new_line = 10;

s = strlen(str);

if (s != 0)
{
s--;
_putchar(str[0]);

while (i <= s)
{
if (i % 2 == 0)
_putchar(str[i]);
i++;
}
}
_putchar(new_line);
}
