#include <stdio.h>
/**
 * main - adds the fibbonacci numbers
 * Return: Always return 0
 */
int main(void)
{
	int a;
	long int f1, f2, fn;

	f1 = 1;

	f2 = 2;

	printf("%ld, %ld", f1, f2);
	for (a = 0; a < 48; a++)
	{
		fn = f1 + f2;
		printf(", %ld", fn);
		f1 = f2;
		f2 = fn;
	}
	printf("\n");
	return (0);
}

