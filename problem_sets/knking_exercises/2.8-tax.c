#include <stdio.h>

#define TAX 0.05

int main()
{
	float amount;
	printf("Enter a dollar amount: ");
	scanf("%f", &amount);

	printf("With tax added: %.2f\n", amount * (1 + TAX));

	return 0;
}