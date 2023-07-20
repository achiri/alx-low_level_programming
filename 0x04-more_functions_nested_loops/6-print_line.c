#include "main.h"

/**
* print_line - prints a line in the terminal
*@n: integer
*/

void print_line(int n)
{
	int times = n;

	for (times = n; times > 0; times--)
		_putchar('_');

	_putchar('\n');
}
