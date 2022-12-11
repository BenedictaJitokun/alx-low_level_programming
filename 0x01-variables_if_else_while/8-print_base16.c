#include <stdio.h>
/**
 * main - Prints out numbers in base 16
 * Return: Always return 0
 */
int main(void)
{
	char ch;
	int n, num;

	for (n = 0; n < 10; n++)
	{
		num = (n % 16) + '0';
		putchar(num);
	}

	for (ch = 'a'; ch <= 'f'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
