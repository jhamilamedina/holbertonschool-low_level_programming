#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - function tha concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: the two string concatenated
 */

char *str_concat(char *s1, char *s2)
{
int len1, len2;
char *s;

if (s1 == NULL)
{
s1 = "";
}

if (s2 == NULL)
{
s2 = "";
}
len1 = strlen(s1);
len2 = strlen(s2);

s = malloc(len1 + len2 + 1);
if (s == NULL)
{
return (NULL);
}
return (0);
}
