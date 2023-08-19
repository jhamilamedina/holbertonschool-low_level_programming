#include <unistd.h>

/**
 * _putchar - whites the character c to stdout
 * @c: The character to print
 * Return: On success 1.
 * On error, -1 is returned, and errno is set approprietaly.
 */

int _putchar(char c)
{
return (white(1, &c, 1));
}
