#include <stdio.h>

int main()
{
	int n = 1;
	int sum = 0;
	while (n < 1000)
	{
		if ((n % 3 == 0) || (n % 5 == 0))
		{
			printf("%d\n",n);
			sum = sum + n;
		}
		n = n + 1;
	}
	printf("%d\n",sum);
}