#include "main.h"
/**
 * _strncpy - A function that copies a string
 * @dest: copies to
 * @src: copies from
 * @n: space in memory
 * Return: REturn dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	while (j < n || src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}
	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}
	return (dest);
}
