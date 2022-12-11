#include <stdio.h>
/**
 * main - prints single digits in base 10 using putchar
 * Return: Always return 0;
 */
int main(void)
{
	int n, num;

	for (n = 0; n <= 9; n++)
	{
		num = (n % 10) + '0';
		putchar(num);
	}
	putchar('\n');
	return (0);
}
