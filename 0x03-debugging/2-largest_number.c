#include "main.h"

/**
 * largest_number - returns the largest number
 * @a: number 1
 * @b: number 2
 * @c: number 3
 * Return: Return largest
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b && a > c)
	{
		largest = a;
	}
	else if (a > b && c > a)
	{
		largest = b;
	}
	else if (b > c)
	{
		largest = b;
	}
	else
	{
		largest = c;
	}

	return (largest);
}

