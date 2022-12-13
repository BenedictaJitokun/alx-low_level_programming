#include "main.h"
/**
 * print_last_digit - Prints the last gigit of numbers
 * @z: Parameter
 * Return: Always return 0
 */
int print_last_digit(int z)
{
	int n = z % 10;

	if (n < 0)
	{
		n *= -1;
	}
	_putchar(n + 48);
	return (0);
}
