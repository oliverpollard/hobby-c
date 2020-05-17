#include <stdio.h>

int main()
{
	int age;
	printf("Please enter your age: ");
	scanf("%d", &age);

	int mac_diff = age - 5;
	int author_diff = age - 22;

	if (author_diff == 0)
	{
		printf("%d! You are the same age as my author, Oliver, and %d years older than me.\n", age, mac_diff);
	}
	else if (mac_diff == 0)
	{
		printf("%d, you are the same age as me! You are %d years younger than Oliver.\n", age, -author_diff);
	}
	else if (mac_diff < 0) 
	{
		printf("%d, you are %d years younger than me and %d years younger than Oliver.\n", age, -mac_diff, -author_diff);
	}
	else if (mac_diff > 0 && author_diff < 0) 
	{
		printf("%d, you are %d years older than me and %d years younger than Oliver.\n", age, mac_diff, -author_diff);
	}
	else 
	{
		printf("%d, you are %d years older than me and %d years older than Oliver.\n", age, mac_diff, author_diff);
	}
	return 0;
}
