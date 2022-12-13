#include "main.h"
/**
 * times_table - Prints the 9 time table
 * Return: Always return 0
 */
void times_table(void)
{
	int p, m, n;

	for (n = 0; n < 10; n++)
	{
		for (m = 0; m < 10; m++)
		{
			p = n * m;
			if ((p / 10) == 0)
			{
				if (m == 0)
				{
					_putchar('0');
					_putchar(',');
					_putchar(' ');
				}
				if (m != 0)
				{
					_putchar(' ');
					_putchar((p % 10) + '0');
				}
				if (m < 0)
				{
					_putchar(' ');
					_putchar(',');
				}
			}
			else
			{
				_putchar((p / 10) + '0');
				_putchar((p % 10) + '0');
				if (m < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}
		}
		_putchar('\n');
	}
}
