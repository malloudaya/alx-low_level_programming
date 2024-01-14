#include "main.h"
#include <stdlib.h>
/**
 * create_array - creates an array of chars and initializes it
 * @size: size of array
 * @c: specific character to initialize array with
 * Return: pointer to array or NULL
 */
char *create_array(unsigned int size, char c)
{
	char *a;

	if (size == 0)
		return (0);
	a = malloc(size * sizeof(c));
	if (a == NULL)
		return (NULL);
	while (size--)
		*(a + size) = c;
	return (a);
}
