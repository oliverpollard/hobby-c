#include <stdio.h>

int prime(long n1)
{
	long n2 = 1;
	long mod;
	int count = 0;
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
		return 1;
	}
	else
	{
		return 0;
	}

}


int main()
{

	long num = 600851475143;
	long p = num;
	while (p > 0)
	{
		if (num % p == 0)
		{
			if (prime(p) == 1)
			{
				printf("%ld\n",p);
			}
		}
		p = p - 1;
	}
	

}