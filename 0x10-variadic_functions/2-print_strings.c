#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings, followed by a new line
 * @separator: separator string
 * @n: number of strings passed to function
 * Return: return 0
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);
		if (separator != NULL && i != n - 1)
		{
			if (str != NULL)
				printf("%s%s", str, separator);
			else
				printf("(nil)%s", separator);
		}
		else
			if (str != NULL)
				printf("%s", str);
			else
				printf("(nil)");
	}
	printf("\n");
	va_end(args);
}
