#include <stdio.h>
/**
 * main - prints all possible different combinations of three digits
 * Return: Always 0
 */
int main(void)
{
	int n = '0';
	int z = '0';
	int k = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			for (k = '0'; k <= '9'; k++)
			{
				if (!((k == z) || (z == n) || (z > k) || (n > z)))
				{
					putchar(n);
					putchar(z);
					putchar(k);
					if (!(k == '9' && z == '8' && n == '7'))
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

