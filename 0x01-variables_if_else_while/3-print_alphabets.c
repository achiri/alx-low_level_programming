#include <stdio.h>

/**
 * main - display the alphabet in lowercase, and later in uppercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	int letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);
	putchar('\n');
	return (0);
}
