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

	va_start(args, n);

	for (int i = 0; i < n; i++)
		char *str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (i < n - 1 && separator != NULL)
			printf("%s", separator);
	printf("\n");
	va_end(args);
}
