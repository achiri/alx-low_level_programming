#include "main.h"

/**
 * print_last_digit - print the last digit of integer
 * @n: integer to use
 * Return: last digit and exit
 */

int print_last_digit(int n)
{
	if (n < 0)
		n *= -1;
	
	_putchar('0' + (n % 10));

	return (n % 10);
}
