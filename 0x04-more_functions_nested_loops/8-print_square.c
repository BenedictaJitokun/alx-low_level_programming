#include "main.h"
/**
 * print_square - prints the square of characters
 * @size: size of the character
 * Return: Always return 0
 */
void print_square(int size)
{
	int n;
	int z = 0;

	if (size > 0)
	{
		for (n = 0; n < size; n++)
		{
			while (z < size)
			{
				_putchar('#');
				z++;
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
