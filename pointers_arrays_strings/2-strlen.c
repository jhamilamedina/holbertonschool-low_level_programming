#include "main.h"
#include <stdio.h>

/**
 * _strlen - tha return the length of the string.
 * @s: pinter name
 * Return: length of a string
 */

int _strlen(char *s)
{
int contador = 0;

while (s[++contador] != 0);
return (contador);
}
