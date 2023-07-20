#include "main.h"

/**
* print_line - prints a line in the terminal
* Return: returns void and exits
*/

void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');

}
