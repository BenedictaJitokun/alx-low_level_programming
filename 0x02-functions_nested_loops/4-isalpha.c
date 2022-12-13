#include "main.h"
/**
 * _isalpha - checks upper and lowercase letters
 * Return: Always return
 * @c: Parameter
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
