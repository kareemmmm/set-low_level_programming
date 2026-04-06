#include <stdio.h>

/**
 * main - prints the number of arguments passed into it
 * @argc: number of arguments
 * @argv: array of arguments
 *
 * Return: Always 0
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	/* Subtract 1 to exclude the program name itself */
	printf("%d\n", argc - 1);
	return (0);
}
