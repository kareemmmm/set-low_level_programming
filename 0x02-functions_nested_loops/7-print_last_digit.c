#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer to extract from
 * Return: value of last digit
 */
int print_last_digit(int n)
{
	int last;

	last = n % 10;
	if (last < 0)
		last = -last;
	_putchar(last + '0');
	return (last);
}
