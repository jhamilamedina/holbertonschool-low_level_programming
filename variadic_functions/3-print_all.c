#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_all - prints all
 * @format: list of types of arguments passed to the function
 */

void print_all(const char * const format, ...)
{
	int i = 0;
	char *str, *sep = "";
	va_list list;

	va_start(list, format);

	if (format)
	{
		while (format[i])
		{
			switch (format[i])
			{
				case 'c':
					printf("%s%c", sep, va_arg(list, int));
					break;
				case 'i':
					printf("%s%d", sep, va_arg(list, int));
					break;
				case 'f':
					printf("%s%f", sep, va_arg(list, double));
					break;
				case 's':
					str = va_arg(list, char *);

					if (str == NULL)
						str = ("nil");
					printf("%s", str);

					break;
				default:
					i++;
					continue;
			}
			if (format[i + 1] != '\0')
				printf("%s", ", ");
			i++;
		}
		printf("\n");
		va_end(list);
	}
}
