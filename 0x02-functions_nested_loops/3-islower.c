#include "main.h"
/**
 * _islower - a function that checks for lowercase character
 * Return: return always
 * @c: is a prameter
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);
	putchar ('\n');
}

