#include "main.h"
/**
 * _isupper - checks the upper case letter
 * @c: parameter
 * Return: 1
 */
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}

