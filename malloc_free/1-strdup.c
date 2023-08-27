#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer
 * @str: pointer
 * Return: NULL if insufficient memory in the new location
 */

char *_strdup(char *str)
{
char *newstr;
int i, r = 0;

if (str == NULL)
return (NULL);
i = 0;
while (str[i] != '\0')
i++;

newstr = malloc(sizeof(char) * (i + 1));
if (newstr == NULL)
return (NULL);

for (r = 0; str[r]; r++)
newstr[r] = str[r];
return (newstr);
}
