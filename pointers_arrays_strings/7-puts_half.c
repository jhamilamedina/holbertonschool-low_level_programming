#include "main.h"
#include "stdio.h"
#include "string.h"

/**
 * puts_half - Print the second half of the string
 * @str: string a print
 * Return: void
 */

void puts_half(char *str)
{
long len, start;
const int new_line = 10;

len = strlen(str);
if (len != 0)
{
if (len % 2 == 0)
start = len / 2;
else
start = ((len - 1) / 2) + 1;
len--;

while (start <= len)
{
_putchar(str[start]);
start++;
}
}
_putchar(new_line);
}
