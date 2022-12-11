#include <stdio.h>
/**
 * main - prints letters in reverse order z to a
 * Return: Always return 0
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
