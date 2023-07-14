#include <stdio.h>

/**
 * main - will print the alphabet in lowercase
 * Return: return 0 and exit the program
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	putchar('\n');

	return (0);
}
