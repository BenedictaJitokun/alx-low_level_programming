#include <stdio.h>
/**
 * main - adds the first 98 fibonacci numbers
 * Return: Always return 0
 */
int main(void)
{
	long int f1, f2, fn, afn;

	f1 = 1;

	f2 = 2;

	fn = afn = 0;

	while (fn <= 4000000)
	{
		fn = f1 + f2;
		f1 = f2;
		f2 = fn;
		if ((f1 % 2) == 0)
		{
			afn += f1;
		}
	}
		printf("%ld\n", afn);
		return (0);
}

