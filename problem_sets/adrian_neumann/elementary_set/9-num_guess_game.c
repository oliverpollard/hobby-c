#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main()
{
	srand(time(NULL));
	int r = rand() % 1000;
	int guess;
	int count = 0;
	do
	{
		printf("Guess the number: ");
		scanf("%d",&guess);
		if (guess > r)
		{
			printf("Too high...\n");
		}
		if (guess < r)
		{
			printf("Too low...\n");
		}
		count = count + 1;
	}
	while (guess != r);
	printf("Congratulations! You correctly guessed %d\n",r);
	printf("Number of guesses: %d\n",count);
}