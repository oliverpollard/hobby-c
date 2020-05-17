#include <stdio.h>
#include <string.h>

int main()
{
	int n;
	char * func;
	printf("Please enter a positive integer: ");
	scanf("%d",&n);
	printf("Type s/p for sum or product function: ");
	scanf("%s",func);

	int c = 1;
	int out = 0;
	if (strncmp(func,"s",1) == 0)
	{
		while (c < n+1)
		{
			out = out + c;
			c = c + 1;
		}
	}
	else if (strncmp(func,"p",1) == 0)
	{
		out = 1;
		while (c < n+1)
		{
			out = out * c;
			c = c + 1;
		}
	}
	else
	{
		printf("Unknown function.\n");
		return 0;
	}

	printf("%d\n", out);
	return 0;
}