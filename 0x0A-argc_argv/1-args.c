#include <stdio.h>

/**
 * main - Prints the number of arguments passed into main
 * @argc: Number of command line arguments
 * @argv: Array name
 * Return: 0
 */

int main(int argc, char *argv[])
{
	argv++;
	if (argc >= 0)
		printf("%d\n", argc-1);
	return(0);
}
