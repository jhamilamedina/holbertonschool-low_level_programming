#include "main.h"
#include <stdio.h>

/**
 * _puts_recursion - function tha prints a string
 * @s: the string to print
 * Return: Nothing
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	s++;
	_puts_recursion(s);
}
