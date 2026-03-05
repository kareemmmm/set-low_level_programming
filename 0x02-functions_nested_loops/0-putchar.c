#include "main.h"

/**
 * main - prints _putchar
 * Return: Always 0
 */
int main(void)
{
	char *sh = "_putchar";
	int i;

	for (i = 0; i < 8; i++)
		_putchar(sh[i]);
	_putchar('\n');
	return (0);
}
