#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string to stdout
 * @str: String a print
 * Return: void
 */

void _puts(char *str)
{

for (; *str != '\0'; str++)
{
_putchar(*str);
}
_putchar('\n');

}
