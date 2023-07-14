#include <stdlib.h>
#include <time.h>
#include <stlib.h>

/**
* main - get the last digit from a random variable and compare
* Return: Return void and exit the program
*/

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("The last digit of %d is %d, n , n%10);
	if (n % 10 > 5)
		printf("and is greater than 5\n");
	elseif (n % 10 == 0)
		printf("and is 0\n");
	elseif (n % 10 < 6 && n % 10 ==! 0)
		printf("and is less than 6 and not 0\n");
	return (0);
}
