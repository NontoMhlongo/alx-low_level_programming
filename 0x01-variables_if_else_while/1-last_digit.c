#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - print last digit of a string
 * Return: 0 Success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 5 && n > 5)
		printf("Last digit of %d is and is greater than 5\n", n);
	else if (n < 5 && !n < 0)
		printf("last digit of %d is and is less than 0 and greater than 5\n", n);
	else
		printf("%d is zero and string is zero\n");
	return (0);
}

