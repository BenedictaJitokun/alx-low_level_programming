#include "main.h"
/**
 * print_times_table - prints the nth times table
 * @n: parameter
 */
void print_times_table(int n)
{
	int z, p, m;

	if (n >= 0 && n <= 15)
	{
		for (m = 0; m <= n; m++)
		{
			_putchar(48);
			for (z = 1; z <= n; z++)
			{
				p = m * z;
				_putchar(44);
				_putchar(32);
				if (p <= 9)
				{
					_putchar(32);
					_putchar(32);
					_putchar(p + 48);
				}
				else if (p <= 99)
				{
					_putchar(32);
					_putchar((p / 10) + 48);
					_putchar((p % 10) + 48);
				}
				else
				{
					_putchar(((p / 100) % 10) + 48);
					_putchar(((p / 10) % 10) + 48);
					_putchar((p % 10) + 48);
				}
			}
			_putchar('\n');
		}
	}
}
