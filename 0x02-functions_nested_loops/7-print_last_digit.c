#include "main.h"

/**
 * print_last_digit - print the last digit of integer
 * @n: integer to use
 * Return: last digit and exit
 */

int print_last_digit(int n)
{
	int last;
	last = n % 10;

	if(last > 0)
	{
		last = last * -1;
	
	}
	_putchar(last + '0');
	return (last);
}
