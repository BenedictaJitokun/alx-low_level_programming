#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - compares the last digit of random numbers
 * Return: Always 0
 */
int main(void)
{
	int n, k;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	k = n % 10;

	if (k > 5)
	{
		printf("Last digit of %d and is %d is greater than 5\n", n, k);
	}
	else if (k == 0)
	{
		printf("Last digit of %d and is %d is 0\n", n, k);
	}
	else
	{
	printf("Last digit of %d is %d and is less than 6 and not 0\n", n, k);
	}
	return (0);
}
