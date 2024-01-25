#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - prints numbers, followed by a new line
 * @separator: separator string
 * @n: number of integers passed to function
 * Return: return 0
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (separator != NULL && i != n - 1)
			printf("%i%s", va_arg(args, int), separator);
		else
			printf("%i", va_arg(args, int));
	}
	printf("\n");
	va_end(args);
}
