#include "main.h"
/**
 * print_diagonal - a function that draws a diagonal line on the terminal
 * @n: parameter
 * Return: Always return 0
 */
void print_diagonal(int n)
{
	int j, a;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (a = 0; a < n; a++)
			{
				_putchar(' ');
			}
			_putchar(92);
			if (j  == n - 1)
			{
				continue;
			}
			_putchar('\n');
		}
	}
	_putchar('\n');
}
