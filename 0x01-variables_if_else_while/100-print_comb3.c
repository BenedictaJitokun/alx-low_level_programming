#include <stdio.h>
/**
 * main - program that prints all possible different combinations of two digits
 * Return: Always 0
 */
int main(void)
{
	int n = '0';
	int z = '0';

	for (n = '0'; n <= '9'; n++)
	{
		for (z = '0'; z <= '9'; z++)
		{
			if (!((z == n) || (n > z)))
			{
				putchar(n);
				putchar(z);
				if (!(z == '9' && n == '8'))
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

