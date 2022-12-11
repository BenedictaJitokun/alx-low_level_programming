#include <stdio.h>
/**
 * main - Prints numbers in base i6
 * Return: Always 0;
 */
int main(void)
{
	int n, num;
	char ch;
	
	for (n = 0; n < 16; n++)
	{
		num = (n % 16) + '0';
		putchar(num);
		if (n > 10 && n < 16)
		{
			for (ch = 'a'; ch <= 'f'; ch++)
			{
				putchar(ch);
			}
		}
	}
	return (0);
}

