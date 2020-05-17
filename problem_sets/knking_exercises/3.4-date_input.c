#include <stdio.h>

int main()
{
	int day, month, year;

	printf("Enter a date (dd/mm/yy): ");
	scanf("%d/%d/%d",&day,&month,&year);

	printf("You entered the date %2d%2d%2d\n",year,month,day);

	return 0;
}