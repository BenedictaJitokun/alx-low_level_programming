#include "main.h"
/**
 * string_toupper - a function that changes all lowercase letters of a string
 * @n: number
 * Return: Return n
 */
char *string_toupper(char *n)
{
	int i;

	i = 0;
	while (n[i] != '\0')
	{
		if (n[i] >= 'a' && n[i] <= 'z')
		{
			n[i] -= 32;
			i++;
		}
	}
	return (n);
}


