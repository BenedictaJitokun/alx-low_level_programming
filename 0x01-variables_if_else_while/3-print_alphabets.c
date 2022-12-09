#include <stdio.h>
/**
 * main - prints lower and upper case letters
 * Return: Always 0
 */
int main(void)
{
	int ch, CH, BH, bh;

	ch = 'a';

	bh = 'z';

	CH = 'A';

	BH = 'Z';

	while (ch <= bh)
	{
		putchar(ch);
		ch++;
	}
	while (CH <= BH)
	{
		putchar(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
