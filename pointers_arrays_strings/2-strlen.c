#include "main.h"
#include <stdio.h>

/**
 * _strlen - tha return the length of the string.
 * @s: Value a Read len
 * Return: the len of string
 */

int _strlen(char *s)
{
int contador = 0;

while (s[++contador] != 0);
return (contador);
}
