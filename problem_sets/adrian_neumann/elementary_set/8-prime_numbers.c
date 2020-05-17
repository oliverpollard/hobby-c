#include <stdio.h>

int main()
{
	long n1 = 1;
	int n2 = 1;
	int mod;
	int count;

	long num = 10000;
	float perct;

	while (n1 < num)
	{
		n2 = 1;
		count = 0;
		while (n2 <= n1)
		{
			mod = n1 % n2;
			
			n2 = n2 + 1;

			if (mod == 0)
			{
				count = count + 1;
			}
		
		}
		if (count < 3)
		{
			printf("%ld \n",n1);
		}
		perct = 100*(n1/num)+2;
		printf("%f \n",perct);
		n1 = n1 + 1;
	}

	

}