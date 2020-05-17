#include <stdio.h>

int main()
{
	int years[20];
	int leap[20];
	years[0] = 2019;
	int count = 0;
	while (count < 19)
	{
		years[count+1] = years[count] + 1;

		if (years[count] % 4 != 0)
		{
			leap[count] = 0;
		}
		else if (years[count] % 100 != 0)
		{
			leap[count] = 1;
		}
		else if (years[count] % 400 != 0)
		{
			leap[count] = 0;
		}
		else
		{
			leap[count] = 1;
		}
		count = count + 1;
	}

	count = 0;
	while (count < 19)
	{
		if (leap[count] == 1)
		{
			printf("%d\n",years[count]);
		}
		count = count + 1;
	}


}