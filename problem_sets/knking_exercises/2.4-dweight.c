/* computes the dimensional weight of a box */
/* from input provided by the user          */

#include <stdio.h>

#define HEIGHT 8
#define LENGTH 12
#define WIDTH 10


int main()
{
	int volume;

	volume = HEIGHT * LENGTH * WIDTH;

	printf("Dimensions: %dx%dx%d\n", LENGTH, WIDTH, HEIGHT);
	printf("Volume (cubic inches): %d\n", volume);
	printf("Dimensional weight (pounds): %d\n", (volume + 165) / 166);

	return 0;
}