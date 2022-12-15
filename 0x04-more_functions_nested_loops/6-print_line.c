#include "main.h"
/**
 * print_line - a function that draws a straight line in the terminal
 * @n: parameter
 * Return: Always return 0
 */
void print_line(int n)
{
	int a;

	if (n > 0)
	{
		for (a = 1; a <= n; a++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
