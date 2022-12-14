#include <stdio.h>
/**
 * main - prints the first 98 Fibonacci numbers, starting with 1 and 2
 * Return: Always return 0
 */
int main(void)
{
	int a, boolean, boolean2;
	long int f1, f2, fn, fn2, f11, f22;

	f1 = 1;
	f2 = 2;
	boolean = boolean2 = 1;
	printf("%ld. %ld", f1, f2);
	for (a = 0; a < 96; a++)
	{
		if (boolean)
		{
			fn = f1 + f2;
			printf(", %ld", fn);
			f1 = f2;
			f2 = fn;
		}
		else
		{
			if (boolean2)
			{
				f11 = f1 % 1000000000;
				f22 = f2 % 1000000000;
				f1 = f1 / 1000000000;
				f2 = f2 / 1000000000;
				boolean2 = 0;
			}
			fn2 = f11 + f22;
			fn = f1 + f2 + (fn2 / 1000000000);
			printf(", %ld", fn);
			printf("%ld", fn2 % 1000000000);
			f1 = f2;
			f11 = f22;
			f2 = fn;
			f22 = (fn2 % 1000000000);
		}
		if (((f1 + f2) < 0) && boolean == 1)
			boolean = 0;
	}
	printf("\n");
	return (0);
}
