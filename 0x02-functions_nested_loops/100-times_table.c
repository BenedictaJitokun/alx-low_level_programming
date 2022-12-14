#include "main.h"
/**
 * print_times_table - prints the nth times table
 * @n: parameter
 */
void print_times_table(int n)
{
	int z, p, m;

	for (m = 0; m <= n; m++)
	{
		for (z = 0; z <= n; z++)
		{
			p = m * z;
			if ((p / 10) == 0)
			{
				if (z == 0)
				{
					_putchar('0');
				}
				if (z != 0)
				{
					_putchar(' ');
					_putchar((p % 10) + '0');
				}
				if (z < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				if (z < n)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
