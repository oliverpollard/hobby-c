#include <stdio.h>

int main()
{
	int day, month, year, number;
	float price;

	printf("Enter item number: ");
	scanf("%d", &number);
	printf("Enter unit price: ");
	scanf("%f", &price);
	printf("Enter a date (dd/mm/yy): ");
	scanf("%d/%d/%d",&day,&month,&year);

	printf("Item\t\tUnit\t\tPurchase\n");
	printf("\t\tPrice\t\tDate\n");
	printf("%d\t\t$%7.2f\t%2d\\%2d\\%2d\n",number,price,day,month,year);

	return 0;
}