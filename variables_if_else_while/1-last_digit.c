#include <stdlib.h>

#include <time.h>
#include <stdio.h>

/**
 * main -prints a text according number
 * Return: Always (Success)
 *
 */
int main(void)
{int n, last;
srand(time(0));
n = rand() - RAND_MAX / 2;
last = n % 10;

if (last > 0)
{
printf("Last digit of %d is %d and is greater then 5\n", n, last);
}
else if (last == 0)
{
printf("Last digit of %d is %d and is  0\n", n, last);
}
else if (last < 6 && last != 0)
{
printf("Last digit of %d is %d and is less than 6 and 0\n", n, last);
}
/* your code goes there */
return (0);
}
