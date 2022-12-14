#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - prints from n to 98
 * @n: parameter
 * Return: Always return 0
 */
void print_to_98(int n)
{
	int z;

	if (n < 99)
	{
		for (z = n; z <= 98; z++)
		{
			if (z < 98)
				printf("%d, ", z);
			else
				printf("%d\n", z);
		}
	}
	else
	{
		for (z = n; z >= 98; z--)
		{
			if (n > 98)
				printf("%d, ", z);
			else
				printf("%d\n", z);
		}
	}
}

