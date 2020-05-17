#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
	int n;
	do
	{
		printf("Please enter a positive integer (<13): ");
		scanf("%d",&n);
	}
	while (n > 12);

	int r = 0;
	while (r < n + 1)
	{
		int c = 1;
		while (c < n + 1)
		{
			if (r == 0)
			{
				if (c == 1)
				{
					printf("| x   |");
				}
				else if (c < 10)
				{
					printf("| %d   |",c);
				}
				else if (c < 100)
				{
					printf("| %d  |",c);
				}
			}
			else
			{
				if (c*r < 10)
				{
					printf("| %d   |",c*r);
				}
				else if (c*r < 100)
				{
					printf("| %d  |",c*r);
				}
				else if (c*r < 1000)
				{
					printf("| %d |",c*r);
				}
			}
			c = c + 1;
		}
		printf("\n");
		r = r + 1;
	}

	
}