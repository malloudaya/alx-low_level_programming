#include "function_pointers.h"

/**
 * print_name - prints a name
 * @name: a variable pointing to a character array...the name to print
 * @f: a function pointer that takes a character array
 */
void print_name(char *name, void (*f)(char *))
{
	if (name && f)
		f(name);
}
