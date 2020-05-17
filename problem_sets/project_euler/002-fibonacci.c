#include <stdio.h>
#include <math.h>

int main()
{
	int fib1 = 1;
	int fib2 = 2;
	int fib3 = 0;

	int sum = 2;

	int n = 0;
	while (fib3 < 4*pow(10,6))
	{
		fib3 = fib2 + fib1;
		fib1 = fib2;
		fib2 = fib3;

		if (fib3 % 2 == 0)
		{
			sum = sum + fib3;
		}

		n = n + 1;
	}

	printf("%d\n",sum);

}