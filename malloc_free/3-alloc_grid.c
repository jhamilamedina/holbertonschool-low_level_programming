#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * alloc_grid - function tha returns a pointer a array
 * @width: the nro of columns in the array
 * @height: the nro of rows in the array
 * Return: a pointers to an array
 */


int **alloc_grid(int width, int height)
{
int i, j, k, l;
int **a;

if (width <= 0 || height <= 0)
return (NULL);

a = malloc(sizeof(int) * width);

if (a == NULL)
{
free(a);
return (NULL);
}

for (i = 0; i < height; i++)
{
a[i] = malloc(sizeof(int) * width);

if (a[i] == NULL)
{
for (j = i; j >= 0; j--)
{
free(a[j]);
}
free(a);
return (NULL);
}
}
for (k = 0; k < height; k++)
{
for (l = 0; l < width; l++)
{
a[k][l] = 0;
}
}
return (a);
}

