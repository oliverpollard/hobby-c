#include <stdio.h>

int main()
{
	int n;
	printf("Please enter a positive integer: ");
	scanf("%d",&n);
	int c = 0;
	int sum = 0;
	while (c < n+1)
	{
		if (c % 3 == 0 || c % 5 == 0)
		{
			sum = sum + c;
		}
		
		c = c + 1;
	}
	printf("%d\n", sum);
}