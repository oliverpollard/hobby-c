#include <stdio.h>

int main()
{
	int language, publisher, book_number, check_digit;
	printf("Enter ISBN: ");
	scanf("%d-%d-%d-%d",&language, &publisher, &book_number, &check_digit);

	printf("Lanuage: %d\nPublisher: %d\nBook number: %d\nCheck digit: %d\n", language, publisher, book_number, check_digit);

	return 0;
}