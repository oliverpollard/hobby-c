#include <stdio.h>
#include <math.h>

int main ()
{
	float k = 1;
	float sum = 0;

	while (k < pow(10,6))
	{

		sum = sum + (pow(-1,k+1)/(2*k -1));
		k = k + 1;
	}
	float approx = (1. - (1./3) + (1./5) - (1./7) + (1./9) - (1./11));
	printf("%f\n",approx);
	printf("%f\n",sum);

}