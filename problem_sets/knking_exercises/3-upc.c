#include <stdio.h>

int main()
{
	int type, man_1, man_2, man_3, man_4, man_5, prod_1, prod_2, prod_3, prod_4, prod_5;



	printf("Type code: ");
	scanf("%d", &type);
	printf("Manufacturer code: ");
	scanf("%1d%1d%1d%1d%1d", &man_1, &man_2, &man_3, &man_4, &man_5);
	printf("Product code: ");
	scanf("%1d%1d%1d%1d%1d", &prod_1, &prod_2, &prod_3, &prod_4, &prod_5);

	int check = 9 - ((-1 + (3 * (type + man_2 + man_4 + prod_1 + prod_3 + prod_5)) + (man_1 + man_3 + man_5 + prod_2 + prod_4)) % 10);
	printf("Check digit: %d\n", check);

	return 0;
}