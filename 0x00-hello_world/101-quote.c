#include <stdio.h>
#include <unistd.h>

/**
 * main - this is the main program
 * Return: 1 and exit the program
 * Description: This program prints and that piece of art is useful
 */
int main(void)
{
	write(2, "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", 59);
	return (1);
}
