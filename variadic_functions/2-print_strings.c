#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - function that prints string
 * @separator: is the string to be printed between the strings
 * @n: is the number of strings passed to the function
 * @...: A variable number of strings to be printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list nu;
	char *str;
	unsigned int i;

	va_start(nu, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(nu, char *);
		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	printf("\n");
	va_end(nu);
}
